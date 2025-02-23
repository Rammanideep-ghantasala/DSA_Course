#include<bits/stdc++.h>
using namespace std;
//if you do sort it will take O(NlogN)
void sortarray0f_0_1_2(vector<int>v){
      int cnt0=0;
      int cnt1=0;
      int cnt2=0;
      for(int i=0;i<v.size();i++){
        if(v[i]==0)cnt0++;
       else if(v[i]==1)cnt1++;
        else cnt2++;
      }
    for(int i=0;i<cnt0;i++)v[i]=0;
    for(int i=cnt0;i<cnt0+cnt1;i++)v[i]=1;
    for(int i=cnt0+cnt1;i<v.size();i++)v[i]=2;
}
int main(){
    vector<int>v;
    int n;
    cout<<"ENTER THE VALUE OF n:";
    cin>>n;
    cout<<"ENTER  0,1,2 repeatedly only";
    for(int i=0;i<v.size();i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
  sortarray0f_0_1_2(v);
  for(int num:v){
    cout<<num;
  }

}