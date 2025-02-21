//https://codeforces.com/problemset/problem/1726/A
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
      int n;
      cin>>n;
      vector<ll>arr(n+1);
      for (int i = 1; i <=n; i++)
      {
        cin>>arr[i];
      }

      ll ans = arr[n] - arr[1];

      //only include a1 , an is fixed;

      for (int i = 1; i <=n-1; i++)
      {
         ll x = arr[n] - arr[i];
         ans = max(ans,x);
      }


      //only include an, a1 is fixed:
      for (int i = 2; i <=n-1; i++)
      {
        ll x = arr[i] - arr[1];
        ans = max(ans,x);
      }


      //include both a1, and an:

      for (int i = 1; i <=n-1; i++)
      {
         ll x = arr[i] - arr[i+1];
         ans = max(ans,x);

      }


      cout<<ans<<"\n";
    
      
   }
   

return 0;

}


/*



5
6
1 3 9 11 5 7
1
20
3
9 99 999
4
2 1 8 1
3
2 1 5



*/