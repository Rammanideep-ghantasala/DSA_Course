#include<bits/stdc++.h>
using namespace std;
vector<int>two_sum_target(vector<int>v,int target){
    sort(v.begin(),v.end());
    int left=0;
    int right=v.size()-1;
    while(left<right){
        if(v[left]+v[right]<target){
            left++;
        }
        else if(v[left]+v[right]>target){
            right--;
        }
        else{
            return {v[left],v[right]};
        }
    }
    return {};
}