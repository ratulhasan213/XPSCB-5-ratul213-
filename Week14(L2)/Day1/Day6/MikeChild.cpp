//https://codeforces.com/problemset/problem/1121/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   int n;
   cin>>n;
   vector<ll>arr(n);
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }

  ll ans = -1;
   map<ll,ll>cnt;
  for (int i = 0; i <n; i++)
  {
     for (int j = i+1; j <n; j++)
     {
         ll  val = arr[i]+arr[j];
         cnt[val]++;
     }
     
  }


  for(auto[key,occ]: cnt){
     ans = max(occ,ans);
  }
  


   cout<<ans<<"\n";
   
   
   

return 0;

}



/*


8
1 8 3 11 4 9 2 7


7
3 1 7 11 9 2 12




*/