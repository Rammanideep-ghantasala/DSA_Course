Union of Two Sorted Arrays
Last Updated : 04 Oct, 2024
Given two sorted arrays a[] and b[], the task is to to return union of both the arrays in sorted order. 
Union of two arrays is an array having all distinct elements that are present in either array.  The input arrays may contain duplicates.
[Brute force Approach] Using Nested Loops – O(n*m) Time and O(1) Space.
[Better Approach] Using Set – O((n+m)*(log (n+m))) Time and O(n+m) Space.
[Optimal Approach] Using Merge Step of Merge Sort - O(n+m) Time and O(1) Space.
  
BRUTE FORCE:
[BRUTE FORCE Approach] Using Nested Loops 
The intuition behind this approach is to gather unique elements from two arrays by checking each element against the current result array. 
The idea is to traverse both the arrays and for each element, check if the element is present in the result or not.If not, then add this element to the result.
Time Complexity: O((n + m)2), where n is size of a[] and m is size of b[]

Copying all elements from a[] to res[] takes O(n2) time.
Now in the worst case, there will be no common elements in a[] and b[]. So, to check if the first element of b[] is present in res[],
we need n comparisons. Similarly, for second element of b[], we need (n + 1) comparisons. So for m elements,
total number of comparisons will be: n + (n + 1) + (n + 2) …. (n + m) = (n * m) + (m2 / 2)So, overall time complexity = O(n2 + n * m + m2).
Auxiliary Space: O(1).

BETTER APROACH:
[Better Approach] Using Set – O((n+m)*(log (n+m))) Time and O(n+m) Space
The approach is to insert all elements from both arrays, a[] and b[], into a set. Since a set automatically removes duplicates,
it gives us the union of the two arrays. Also, the set keeps the elements in sorted order, so after inserting them,
we can store these sorted and unique elements in a result array.
Time Complexity: O((n + m) * (log (n + m))) , where n is the size of array a[] and m is the size of array b[].
Auxiliary Space: O(n + m).

OPTIMAL APPROACH:
Using Merge Step of Merge Sort - O(n+m) Time and O(1) Space.
The idea is to find the union of two sorted arrays using merge step in merge sort. We maintain two pointers to traverse both arrays simultaneously. 
If the element in first array is smaller, add it to the result and move the pointer of first array forward.
If the element in second array is smaller, add it to the result and move the pointer of second array forward. 
If both elements are equal, add one of them and move both the pointers forward.
Also, while traversing both the arrays, we will compare the current element with its previous element and skip the current element if it is same as previous element. 
This will ensure that the union will contain only distinct elements.
Time Complexity: O(n + m), Where n is the size of a[] and m is the size of b[]
Auxiliary Space: O(1)

  
