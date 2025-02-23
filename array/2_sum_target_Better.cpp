#include<bits/stdc++.h>
using namespace std;
vector<int>two_sum_target_indices(vector<int>v,int target){
        map<int,int>m;
        for(int i=0;i<v.size();i++){
            int num2=target-v[i];
            if(m.find(num2)!=m.end()){
                return{m[num2],i};
            }
            m[v[i]]=i;
        }
        return {};
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=0;i<v.size();i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"enter the value of target:";
    cin>>target;
    cout<<two_sum_target_indices(v,target);
}