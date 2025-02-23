#include<bits/stdc++.h>
using namespace std;
vector<int>twosumtarget_indices(vector<int>v,int target){
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==target){
                return {i,j};
            }
        }
    }
    return {};
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
    int target;
    cout<<"enter the target:";
    cin>>target;
    cout<<twosumtarget_indices(v,target);
}