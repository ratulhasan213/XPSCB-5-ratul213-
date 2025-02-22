//https://codeforces.com/problemset/problem/1941/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n,m,k;
      cin>>n>>m>>k;

      vector<ll>arr(n);
      vector<ll>brr(m);

      for (int i = 0; i <n; i++)
      {
          cin>>arr[i];
      }

      for (int i = 0; i <m; i++)
      {
         cin>>brr[i];
      }


      ll ans = 0;

      for (int i = 0; i <n; i++)
      {
        for (int j = 0; j <m; j++)
        {
            if(arr[i]+brr[j]<=k){
                ans++;
            }
        }
        
      }

      cout<<ans<<"\n";
      
      
      
   }
   

return 0;

}