/*Find the number that appears once, and the other numbers twice.
Example 1:
Input Format:
 arr[] = {2,2,1}
Result:
 1
Explanation:
 In this array, only the element 1 appear once and so it is the answer.
Example 2:
Input Format:
 arr[] = {4,1,2,1,2}
Result:
 4
Explanation:
 In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.
*/
#include<bits/stdc++.h>
using namespace std;
int number_one_time(vector<int>v){
    int xor1=0;
    for(int i=0;i<v.size();i++){
        xor1=xor1^v[i];
    }
    return xor1;
}
int main(){
    vector<int>v;
    int n;
    cout<<"ENTER THE VALUE OF N:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<number_one_time(v);
}