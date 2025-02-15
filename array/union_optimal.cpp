#include<bits/stdc++.h>
using namespace std;
vector<int>unionof2arrays(vector<int>a,vector<int>b){
      vector<int>res;
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      int i=0;
      int j=0;
      while(i<a.size()&&j<b.size()){
       if(i>0&&a[i-1]==a[i]){
        i++;
            continue;
        }
        if(j>0&&b[j-1]==b[j]){
            j++;
           continue;
        }
       else if(a[i]<b[j]){
            res.push_back(a[i]);
            i++;
        }
        else if(b[j]<a[i]){
            res.push_back(b[j]);
            j++;
        }
        else{
            res.push_back(a[i]);
            i++;
            j++;
        }
      }
      while(i<a.size()){
        if(i>0&&a[i-1]==a[i]){
            i++;
            continue;
        }
            res.push_back(a[i]);
            i++;
      }
      while(j<b.size()){
        if(j>0&&b[j-1]==b[j]){
            j++;
            continue;
        }
            res.push_back(b[j]);
            j++;
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
/*Time Complexity: 
𝑂
(𝑝log𝑝+𝑞log⁡𝑞)
O(plogp+qlogq)
Space Complexity: O(𝑝+𝑞)
*/
//a = {1, 1, 2, 3, 5}
//b = {3, 3, 5, 6} these test cases will not work if they are not sorted.so sorting is very important