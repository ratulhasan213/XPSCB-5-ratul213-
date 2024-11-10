//https://codeforces.com/problemset/problem/1800/C2
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       priority_queue<ll>pq;
       int n;
       cin>>n;
       ll val;
       ll ans = 0;
       for (int i = 0; i <n; i++)
       {
           cin>>val;
           if(val!=0){
            pq.push(val);
           }
           else{
            if(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
           }
       }

       cout<<ans<<"\n";
       
   }
   

return 0;

}