#include<bits/stdc++.h>
using namespace std;
void leftrotate(vector<int>v,int d){
    reverse(v.begin(),v.begin()+d);
    reverse(v.begin()+d,v.end());
    reverse(v.begin(),v.end());
}
int main(){
    vector<int>v;
    int d;
    cout<<"enter the value of d";
    cin>>d;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"Enter the elements in vector:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    leftrotate(v,d);
    for(int num:v){
        cout<<num<<" ";
    }
    
}