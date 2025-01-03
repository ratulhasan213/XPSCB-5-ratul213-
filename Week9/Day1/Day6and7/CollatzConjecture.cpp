//https://codeforces.com/problemset/problem/1982/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

 
ll ans(ll x, ll  y, ll k){
    if(x == 1){
      return 1+(k%(y-1));
    }

    while (x!=1)
    {
        ll need = y - (x%y);
        if(need>k){
         return (x+k);
        }
        k-=need;
        x+=need;
      //   cout<<need<<" "<<k<<" "<<x<<"\n";
        while (x%y==0)
        {
          x = x/y;
        }
        
    }
    return 1+(k%(y-1));
    
}
  


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       ll x,y,k;
       cin>>x>>y>>k;
       
       cout<<ans(x,y,k)<<"\n";
       
       
   }
   

return 0;

}

/*

1
55 5 25

13
1 3 1
2 3 1
24 5 5
16 3 2
2 2 1
1337 18 1
1 2 144133
12345678 3 10
998244353 2 998244353
998244353 123456789 998244352
998244354 998241111 998244352
998244355 2 9982443
1000000000 1000000000 1000000000


*/