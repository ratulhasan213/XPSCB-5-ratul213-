//https://atcoder.jp/contests/abc191/submissions/me
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n,x;
   cin>>n>>x;
   int arr[n];
   vector<int>ans;
   for (int i = 0; i <n; i++)
   {
       cin>>arr[i];
   }

   for (int i = 0; i <n; i++)
   {
        if(arr[i]!=x){
            ans.push_back(arr[i]);
        }
   }

   for(auto val: ans){
    cout<<val<<" ";
   }
   
   

return 0;

}