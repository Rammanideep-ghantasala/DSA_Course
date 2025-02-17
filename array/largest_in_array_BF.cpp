#include<bits/stdc++.h>
using namespace std;
int getlargestelement(vector<int>v,int n){
     n=v.size();
   sort(v.begin(),v.end());
   return v[n-1]; 
}
int main(){
    vector<int>v;
    int n;
    cout<<"ENTER THE VALUE OF N:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"the argest element is "<<getlargestelement(v,n);
}