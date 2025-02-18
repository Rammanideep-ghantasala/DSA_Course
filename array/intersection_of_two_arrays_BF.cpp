#include<bits/stdc++.h>
using namespace std;
vector<int>intersectionoftwoarrays(vector<int>a,vector<int>b){
    vector<int>ans;
    int n=a.size();
    int m=b.size();
    vector<int>visited;
    for(int i=0;i<m;i++){
        visited.push_back(0);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]&&visited[j]==0){
                ans.push_back(a[i]);
                visited[j]=1;
                break;
            }
        }
    }
}
