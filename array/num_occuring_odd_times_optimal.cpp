#include<bits/stdc++.h>
using namespace std;
int getoddoccurance(vector<int>v){
    int result=0;
    for(int i=0;i<v.size();i++){
        result=result^v[i];
    }
    return result;
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter the  value of n:";
    cin>>n;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
     }
     cout<<"The number is"<<getoddoccurance(v);
}