//https://codeforces.com/problemset/problem/1790/D
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
       int n;
         
       cin>>n;

       map<ll,int>cnt;
       ll val;
       for (int i = 0; i <n; i++)
       {
           cin>>val;
           cnt[val]++;
       }

       int ans = 0;
       for(auto[key,val]: cnt){

          if(!cnt.count(key-1)){
                 ans+=val;
          }
          else{
            int preVal = cnt[key-1];
            if(preVal<val){
                 ans+=(val-preVal);
            }
          }
       }
       
       cout<<ans<<"\n";


   }
   

return 0;

}
