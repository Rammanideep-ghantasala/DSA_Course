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
     vector<int>hash(n+1,0);
     for(int i=0;i<n;i++){
        hash[v[i]]=1;
     }
     for(int i=1;i<n;i++){
        if(hash[i]==0){
            return i;
        }
     }
     return -1;
}
int main(){
    vector<int>v={0,1,2,3,5};
    int n=5;
    cout<<missingnumber(v,n);
}