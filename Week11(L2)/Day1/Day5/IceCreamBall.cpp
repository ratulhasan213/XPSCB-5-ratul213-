//https://codeforces.com/problemset/problem/1862/D
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
      ll n;
      cin>>n;

      ll start = 1;
      ll end = 1e10;

      ll ans = 1e18;

      
      auto canMake = [&](ll mid){
           
         return (mid*(mid-1))/2<=n;

      }; 

      while (start<=end)
      {
        ll mid = start+(end-start)/2;

        if(canMake(mid)){
            ans = mid;
              start = mid+1;
           
        }
        else{
           end = mid-1;
        }

      }


      // cout<<ans<<"\n";
     

     ll val = (ans*(ans - 1))/2;
     ans+=(n-val);

     cout<<ans<<"\n";
      

   }
   

return 0;

}




/*


1
179

1
6



5
1
3
6
179
1000000000000000000



*/