//https://codeforces.com/problemset/problem/1474/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPrime(ll n){
   for (int i = 2; i*i <=n; i++)
   {
      if(n%i==0){
        return false;
      }
   }

   return true;
   
}


ll minPrime(ll x){
     for (ll i = x;  ; i++)
     {
        if(isPrime(i)){
            return i;
        }
     }
     
    return -1;
}




int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   int test;
   cin>>test;
   while (test--)
   { 
       ll d;
       cin>>d;
       ll p = minPrime(d+1);
       ll q  =minPrime(d+p);
       cout<<min(p*p*p,q*p)<<"\n";
   }

return 0;

}