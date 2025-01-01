//https://codeforces.com/problemset/problem/1216/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   int n;
   cin>>n;
   ll arr[n];
   ll m = -1;
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
      m = max(arr[i],m);
   }

   ll g = 0;
   ll ans = 0;
   for (int i = 0; i <n; i++)
   {
       g = __gcd(g,m-arr[i]);
       ans+=(m-arr[i]);
   }

   if(g == 0){
    ans = 0;
   }
   else{
     ans = (ans/g);
   }

   cout<<ans<<" "<<g<<"\n";
   
return 0;

}