//https://cses.fi/problemset/task/2428
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


ll countDisntSubArray(ll arr[], int n,int k){

    ll ans = 0;
    map<ll,ll>cnt;

    int start = 0;
    int end = 0;

   while (end<n)
   {
     cnt[arr[end]]++;
      while (cnt.size()>k && start<=end)
      { 
         cnt[arr[start]]--;
         if(cnt[arr[start]]==0){
            cnt.erase(arr[start]);
         }
         start++;
      }
      
      ans+=(end-start+1);
      end++;
   }
   


    return ans;
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n,k;
   cin>>n>>k;
   ll arr[n];
   for (int i = 0; i <n; i++)
   {
     cin>>arr[i];
   }


   cout<<countDisntSubArray(arr,n,k)<<"\n";
   

return 0;

}

