#include<bits/stdc++.h>
using namespace std;
int getoddoccurence(vector<int>v){
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++){//mistake i have done is i wrriten m.size()by mistakenly in place of v.size()
        m[v[i]]++;
    }
    for(auto num:m){
     if(num.second%2!=0){
        return num.first;
     }
    }
    return -1;
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<getoddoccurence(v);
}