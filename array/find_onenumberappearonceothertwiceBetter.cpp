/*Find the number that appears once, and the other numbers twice.
Example 1:
Input Format:
 arr[] = {2,2,1}
Result:
 1
Explanation:
 In this array, only the element 1 appear once and so it is the answer.

Example 2:
Input Format:
 arr[] = {4,1,2,1,2}
Result:
 4
Explanation:
 In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.
*/
#include<bits/stdc++.h>
using namespace std;
int find_number_appearing_one(vector<int>v){
     map<int,int>m;
     for(int i=0;i<v.size();i++){
        m[v[i]]++;
     }
     for(auto num:m){
        if(num.second==1){
              return num.first;
        }
     }
     return -1;
}
int main(){
   vector<int>v;
   int n;
   cout<<"enter the value of n:";
   cin>>n;
   cout<<"enter the element in vector:";
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
   cout<<find_number_appearing_one(v);
}