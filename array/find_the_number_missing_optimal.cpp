/*
/*Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. 
Find the number(between 1 to N), that is not present in the given array.*/
/*
Example 1:
Input Format:
 N = 5, array[] = {1,2,4,5}
Result:
 3
Explanation: 
In the given array, number 3 is missing. So, 3 is the answer.

Example 2:
Input Format:
 N = 3, array[] = {1,3}
Result:
 2
Explanation: 
In the given array, number 2 is missing. So, 2 is the answer
*/

#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>v,int n){
   int sum=n*(n+1)/2;
   int sum2=0;
   for(int i=0;i<n;i++){
sum2=v[i];
   }
   return sum-sum2;
}
/*
2nd optimal
by XOR concept
use the bit manipulation method
*/
/*
int xor1=0;
for(int i=0;i<n;i++){
    xor1=xor1^i;
}
    int xor2=0;
    for(int i=0;i<n-1;i++){
       xor2=zor2^i;
    }
       return xor1^xor2;
       we can reduce the number of loops
       int xor2=0;
       for(int i=0;i<n;i++){
       xor1=xor1^v[i];
       xor2=xor2^i;
       }
*/

