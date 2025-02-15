#include<bits/stdc++.h>
using namespace std;
vector<int>unionoftwosortedarrays(vector<int>a,vector<int>b){
    vector<int>res;   
    for(int i=0; i<a.size(); i++) {
        bool found = false;
        for (int j = 0; j < res.size(); j++) {
            if (a[i] == res[j]){
                found = true;
                break;
            }
        }
        if(!found){
            res.push_back(a[i]);
        }
    }
    for(int i = 0;i <b.size(); i++){
        bool found = false;
        for (int j = 0; j < res.size(); j++) {
            if (b[i] == res[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            res.push_back(b[i]);
        }
    }
sort(res.begin(),res.end());
return res;
}
int main(){
vector<int>a;
int p;
cout<<"Enter the number of elemets for a";
cin>>p;
cout<<"enter elements in 1st array:";
for(int i=0;i<p;i++){
    int x;
    cin>>x;
    a.push_back(x);
}
vector<int>b;
int q;
cout<<"enter the number of elements for b";
cin>>q;
cout<<"enter elements in 2nd array:";
for(int i=0;i<q;i++){
    int y;
    cin>>y;
    b.push_back(y);
}
vector<int>res=unionoftwosortedarrays(a,b);
for(int num:res){
    cout<<num<<" ";
}
return 0;
}
