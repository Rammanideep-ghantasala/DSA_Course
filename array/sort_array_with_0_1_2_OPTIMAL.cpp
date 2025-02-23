#include<bits/stdc++.h>
using namespace std;
//DUTCH NATIONAL FLAG ALGORITHM
void sort_array_0_1_2(vector<int>v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[mid],v[low]);
            mid++;
            low++;
        }
       else if(v[mid]==1){
            mid++;
        }
        else {
            swap(v[mid],v[high]);
            high--;
        }
    }
}
int mian(){
    vector<int>v;
    int n;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    cout<<"Enter the 0,1,2 only";
    for(int i=0;i<v.size();i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort_array_0_1_2(v);
    for(int num: v){
  cout<<num;
    }
}