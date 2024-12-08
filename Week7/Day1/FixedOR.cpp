//https://codeforces.com/problemset/problem/1988/C
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

       ll maxBit = __lg(n);

       deque<ll>ans;
       ll val;
       for (int i = 0; i <=maxBit; i++)
       {
          if((n>>i) & 1){
              val = n - (1LL<<i);
              if(val>0){
                ans.push_front(val);
              }
           
       
          }
        
       }

      ans.push_back(n);
       
      cout<<ans.size()<<"\n"; 
      for(ll x: ans){
           cout<<x<<" ";
      } 
      

      cout<<"\n";
   }
   

return 0;

}

/*

4
1
3
14
23


*/