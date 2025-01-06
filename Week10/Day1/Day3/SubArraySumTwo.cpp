//https://cses.fi/problemset/task/1661
#include<bits/stdc++.h>
#define ll long long int  
using namespace std;


ll countSubArray(vector<ll>& arr, ll target){
    ll ans = 0;

   map<ll,int>cnt;
   cnt[0] = 1;
   ll sum = 0;
   int len = arr.size();

   for (int i = 0; i <len; i++)
   {
      sum+=arr[i];
      ll need = sum - target;

      if(cnt.count(need)){
         ans+=cnt[need];
      }

      cnt[sum]++;
   }
   
    return ans;
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   int n,x;
   cin>>n>>x;
   int val;
   vector<ll>arr;
   for (int i = 0; i <n; i++)
   {
     cin>>val;
     arr.push_back(val);
   }
   cout<<countSubArray(arr,x)<<"\n";

return 0;

}

/*

5 0
0 0 0 0 0

*/