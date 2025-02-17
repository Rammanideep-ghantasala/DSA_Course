#include<bits/stdc++.h>
using namespace std;
vector<int>rotatearraybyoneplace(vector<int>v){
    int n=v.size();
    int temp=v[0];
    for(int i=1;i<n;i++){
        v[i-1]=v[i];
    }
    v[n-1]=temp;
    return v;
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"Enter the elements in vector:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>res=rotatearraybyoneplace(v);
    for(int num:res){
        cout<<num<<" ";
    }
}