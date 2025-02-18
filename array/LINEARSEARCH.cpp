#include<bits/stdc++.h>
using namespace std;
int linearsearch(vector<int>v,int k){
    for(int i=0;i<v.size();i++){
        if(v[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>v;
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=0;i<v.size();i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cout<<"enter the element that you want to search:";
    cin>>k;
    int result=linearsearch(v,k);
    cout<<result;
}