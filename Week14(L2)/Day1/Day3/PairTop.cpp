//https://codeforces.com/problemset/problem/1324/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   vector<ll>a(n),b(n);
   for (int i = 0; i <n; i++)
   {
    cin>>a[i];
   }

   for (int i = 0; i <n; i++)
   {
      cin>>b[i];
   }

   vector<ll>c(n);

   for (int i = 0; i <n; i++)
   {
     c[i] = a[i] - b[i];
   }


   sort(c.begin(),c.end());
//    for (int i = 0; i <n; i++)
//    {
//       cout<<c[i]<<" ";
//    }
//    cout<<"\n";
   
   
   ll ans = 0;
   for (int i = 0; i <n; i++)
   {
      if(c[i]<=0){
         continue;
      }

      ll need = -c[i];

      ll up = upper_bound(c.begin(),c.end(),need)-c.begin();
      ans+=(i-up);
   }

   cout<<ans<<"\n";
   

return 0;

}