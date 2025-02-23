#include<bits/stdc++.h>
using namespace std;
int majorityelement(vector<int>v){
     for(int i=0;i<v.size();i++){
        int cnt=0;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j]){
                cnt++;
            }
        }
        if(cnt>v.size()/2){
                   return v[i];
        }
     }
     return -1;
}

int main(){
    vector<int>v;
    int n;
    cout<<"ENTER THE VALUE OF N:";
    cin>>n;
    cout<<"ENTER THE ELEMENTS:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"THE MAJORITY ELEMENT IS:"<<majorityelement(v);
}