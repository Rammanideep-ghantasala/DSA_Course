Find the Number Occurring Odd Number of Times

Given an array of positive integers. All numbers occur an even number of times except one number which occurs an odd number of times.Find the number.

BRUTE FORCE:
A Simple Solution is to run two nested loops. 
The outer loop picks all elements one by one and the inner loop counts the number of occurrences of the element picked by the outer loop. 
Time Complexity: O(n^2)
Auxiliary Space: O(1)
  
BETTER APPROACH:
A Better Solution is to use Hashing. Use array elements as a key and their counts as values.
Create an empty hash table. One by one traverse the given array elements and store counts.
Time Complexity: O(n)
Auxiliary Space: O(n)

OPTIMAL APPROACH:
The Best Solution is to do bitwise XOR of all the elements. XOR of all elements gives us odd occurring elements. 
Time Complexity: O(n)
Auxiliary Space: O(1)
