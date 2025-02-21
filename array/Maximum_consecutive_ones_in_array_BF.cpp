#include<bits/stdc++.h>
using namespace std;
//count maximum number of ones in array
int maximumones(vector<int>v){
       int count=0;
       int maxi=0;
       for(int i=0;i<v.size();i++){
        if(v[i]==1){
          count++;
          maxi=max(maxi,count);
        }
        else{
            count=0;
        }
       }
       return maxi;

}
int main(){
    vector<int>v;
    int n;
    cout<<"enter the n:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<maximumones(v);
}