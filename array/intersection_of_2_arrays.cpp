#include<bits/stdc++.h>
using namespace std;
vector<int>intersectionoftwoarrays(vector<int>a,vector<int>b){
    int i=0;
    int j=0;
    int n=a.size();
    int m=b.size();
    vector<int>ans;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
          ans.push_back(a[i]);
          i++;
          j++;
        }
    }
    return ans;
}