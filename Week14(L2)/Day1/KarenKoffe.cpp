//https://codeforces.com/problemset/problem/816/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n,k,q;
   cin>>n>>k>>q;
   vector<ll>arr(200005,0);
   int left,right;
   int mn = 1e8;
   int mx = -1;
   for (int i = 0; i<n; i++)
   {
     cin>>left>>right;
     mn = min(mn,left);
     mx = max(mx,right);
     arr[left]++;
     arr[right+1]--;
   }



   for (int i = mn; i <=mx; i++)
   {
     arr[i] = arr[i]+arr[i-1];
   }

   for (int i = mn; i <=mx+1; i++)
   {
      if(arr[i]>=k){
        arr[i] = 1;
      }
      else{
        arr[i] = 0;
      }
   }



   vector<pair<int,int>>qrr;
      for (int i = 0; i <q; i++)
   {
      cin>>left>>right;
      mn = min(mn,left);
      mx = max(mx,right);
      qrr.push_back({left,right});
   }

   for (int i = mn; i <=mx; i++)
   {

     arr[i] = arr[i]+arr[i-1];
   }
  


   for(auto p : qrr){

      int l = p.first;
      int r = p.second;

      cout<<arr[r] - arr[l-1]<<"\n";

   }

return 0;

}


/*


3 2 4
91 94
92 97
97 99
92 94
93 97
95 96
90 100


2 1 1
1 1
200000 200000
90 100




*/