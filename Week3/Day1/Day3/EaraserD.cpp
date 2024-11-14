//https://codeforces.com/contest/1873/problem/D
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       
       int ans = 0;
       for (int i = 0; i <n; i++) 
       {
           if(s[i]=='B'){
             ans++;
             i+=k-1;
           }
       }
       cout<<ans<<"\n";

   }
   

return 0;

}


