#include<bits/stdc++.h>
using namespace std;
void leftrotate(vector<int>v,int d){
    int n=v.size();
    vector<int>temp;
    for(int i=0;i<d;i++){
        temp[i]=v[i];
    }
    for(int i=d;i<n;i++){
        v[i-d]=v[d];
    }
    for(int i=n-d;i<n;i++){
        v[i]=temp[i-(n-d)];
    }

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