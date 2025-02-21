/*
Find the number that appears once, and the other numbers twice
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
Result:4.
Explanation:
 In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.
*/
#include<bits/stdc++.h>
using namespace std;
int numberappearingonetime(vector<int>v){
            for(int i=0;i<v.size();i++){
                int count=0;
                int num=v[i];
                for(int j=0;j<v.size();j++){
                      if(v[j]==num){
                        count++;
                      }
                }
                if(count==1){
                    return v[i];
                }
            } 
            return -1;    
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=0;i<v.size();i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
     cout<<numberappearingonetime(v);  
}