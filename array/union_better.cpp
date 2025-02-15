#include<bits/stdc++.h>
using namespace std;
vector<int>unionof2arrays(vector<int>a,vector<int>b){
    set<int>s;
    vector<int>res;
    for(int i=0;i<a.size();i++){
        s.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        s.insert(b[i]);
    }
    for(int num:s){
        res.push_back(num);
    }
return res;
}
int main() {

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
    vector<int>res=unionof2arrays(a,b);
    for(int num:res){
        cout<<num<<" ";
    }
    return 0;
}