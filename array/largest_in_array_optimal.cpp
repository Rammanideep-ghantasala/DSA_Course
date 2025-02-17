#include<bits/stdc++.h>
using namespace std;
int getlargest(vector<int>v,int n){
    n=v.size();
    int largest=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>largest){
            largest=v[i];
        }
    }
    return largest;
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
    cout<<"the argest element is  "<<getlargest(v,n);
}