#include<bits/stdc++.h>
using namespace std;
int numberoccuringoddtimes(vector<int>v){
    for(int i=0;i<v.size();i++){
        int count=0;
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j]){
                count++;
            }
        }
        if(count%2==1){
            return v[i];
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
    cout<<numberoccuringoddtimes(v);
}