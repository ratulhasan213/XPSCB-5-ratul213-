//https://codeforces.com/problemset/problem/1051/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   ll l,r;
   cin>>l>>r;
   cout<<"YES\n";
   for (ll i = l; i <=r; i+=2)
   {
      cout<<i<<" "<<i+1<<"\n";
   }
   

return 0;

}