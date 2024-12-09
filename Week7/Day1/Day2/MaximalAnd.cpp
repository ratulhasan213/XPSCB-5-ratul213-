//https://codeforces.com/problemset/problem/1669/H
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while(test--){
  
   int n;
   ll k;
   cin>>n>>k;
     ll arr[n];
   for (int i = 0; i <n; i++)
   {
       cin>>arr[i];
   }
   

 
   int B = 30;
   vector<int>bit(B+1);



   for (int i = 0; i<n; i++)
   {
       for (int k = B; k>=0; k--)
       {
           if((arr[i]>>k) & 1){
                bit[k]++;
           }
          
       }   
   }

       ll ans = 0;
       for (int  i = 30; i>=0; i--)
       {
          if(bit[i] == n){
             ans += (1LL<<i);   
          }
          else{
              
              if(n-bit[i]<=k){
                ans += (1LL<<i); 
                k-=(n-bit[i]);
              }
          }
       }

      cout<<ans<<"\n";

    }
       
   

return 0;

}



/*

4
3 2
2 1 1
7 0
4 6 6 28 6 6 12
1 30
0
4 4
3 1 3 1



*/