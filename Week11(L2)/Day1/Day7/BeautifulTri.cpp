//https://codeforces.com/problemset/problem/1974/C
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
   ll arr[n];
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }
   

   map<tuple<ll,ll,ll>,ll>cnt;


   int indx = 0;
   ll ans = 0;

   while (indx<n-2)
   {
      ll a = arr[indx];
      ll b = arr[indx+1];
      ll c = arr[indx+2];

      ans+=(cnt[{a,b,-1}]  +  cnt[{a,-1,c}] + cnt[{-1,b,c}] - 3*cnt[{a,b,c}] );

      cnt[{a,b,c}]++;
      cnt[{a,b,-1}]++;
      cnt[{a,-1,c}]++;
      cnt[{-1,b,c}]++;    
      indx++;


   }
   
cout<<ans<<"\n";

  }


return 0;

}


/*

1
8
1 2 3 2 2 3 4 2


8
5
3 2 2 2 3
5
1 2 1 2 1
8
1 2 3 2 2 3 4 2
4
2 1 1 1
8
2 1 1 2 1 1 1 1
7
2 1 1 1 1 1 1
6
2 1 1 1 1 1
5
2 1 1 1 1



*/