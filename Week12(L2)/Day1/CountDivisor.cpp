//https://cses.fi/problemset/task/1713
#include<bits/stdc++.h>
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

  int ans = 0;
   for (int i = 1; i*i <=n; i++)
   {
      if(n%i==0){
         ans++;
         int t = n/i;

         if(n%t == 0 && t!=i){
            ans++;
         }
      }
   }
   cout<<ans<<"\n";
   
   }
   

return 0;

}