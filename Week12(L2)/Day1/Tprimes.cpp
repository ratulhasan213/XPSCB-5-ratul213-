//https://codeforces.com/problemset/problem/230/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool isPrime(ll n){
    if(n<=1){
        return false;
    }


    for (ll i = 2; i*i <=n; i++)
    {
        if(n%i==0){
            return false;
        }
    }

    return true;
    
}



ll isPerfectSquare(ll n){
    ll x = sqrtl(n);

    if( (x*x) == n){
        return x;
    }

    return -1;
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   ll arr[n];
   for (int i = 0; i<n; i++)
   {
      cin>>arr[i];
   }
    
  


   for (int i = 0; i <n; i++)
   {
      ll x = isPerfectSquare(arr[i]);
      if(x==-1){
        cout<<"NO\n";
      }
      else{
         if(isPrime(x)){
            cout<<"YES\n";
         }
         else{
            cout<<"NO\n";
         }
      }
   }
   
   

return 0;

}

/*

3
4 5 6


*/