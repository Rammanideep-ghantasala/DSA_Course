#include<bits/stdc++.h>
using namespace std;
int majorityelement(vector<int>v){
    map<int,int>m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    for(auto it:m){
          if(it.second>v.size()/2){
            return it.first;
          }
    }
     return -1;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"ENTER THE ELEMENTS:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<majorityelement(v);
}
