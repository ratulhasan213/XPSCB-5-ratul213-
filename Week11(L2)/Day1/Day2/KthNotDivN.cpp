//https://codeforces.com/problemset/problem/1352/C
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
      ll n,k;
      cin>>n>>k;

      ll start = 1;
      ll end = 1e18;

      auto hasEnoughNum = [&] (ll mid){
         return (mid - (mid/n) )>=k;
      };
      
      ll ans = 0;

      while (start<=end)
      {
         ll mid = start+(end-start)/2;

         if(hasEnoughNum(mid)){
            ans = mid;
            end = mid-1;
         }
         else{
            start = mid+1;
         }
      }


      cout<<ans<<"\n";
      
   }
   

return 0;

}



/*


1
1000000000 1000000000

6
3 7
4 12
2 1000000000
7 97
1000000000 1000000000
2 1



*/