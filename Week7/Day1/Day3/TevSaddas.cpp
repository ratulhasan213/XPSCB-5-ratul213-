//https://codeforces.com/problemset/problem/535/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   ll n;
   cin>>n;
       
   int digit = floor(log10(n)+1);
   
  

   ll ans = 0;
    for (int i = 1; i < digit; i++) {
        ans += (1 << i); 
    }

    ll p = 0;
    while (n>0)
    {
        if(n%10==7){
          ans+=(1<<p);
        }
        p++;
        n = n/10;
    }
    
  
     cout<<ans+1<<"\n";
  
   

 

return 0;

}