//https://cses.fi/problemset/result/11609207/
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

void expp(int x, int n){
    int ans = 1;
    while (n)
    {
        if(n&1){
           ans = ( 1LL * ans%mod * x%mod)%mod;
        } 
        // n = n/2;
         n = n>>1;   
        x = (1LL* x%mod * x%mod)%mod;
    }

    cout<<ans<<"\n";
    
    
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int a,b;
      cin>>a>>b;
      expp(a,b);

   }
   

return 0;

}