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
      ll arr[n];
       for (int i = 0; i <n; i++)
       {
           cin>>arr[i];
       }


       ll mx = arr[0];

       ll ans = 0;
       ll sum = 0;

       for (int i = 0; i <n; i++)
       {
           sum+=arr[i];
           mx = max(mx,arr[i]);

           if(sum-mx == mx){
             ans++;
           }

       }
       

       
     cout<<ans<<"\n";

       
   }
   

return 0;

}