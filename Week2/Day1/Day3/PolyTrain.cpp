//https://codeforces.com/problemset/problem/1165/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   map<int,int>cnt;
   int val;

   for (int i = 0; i <n; i++)
   {
       cin>>val;
       cnt[val]++;
   }

   int ans = 0;

 

   for (int i = 1; i <=n; i++)
   {
      
      auto it = cnt.lower_bound(i);

      if(it!=cnt.end()){
          int k = it->first;
         

          if(cnt[k]>0){
            ans++;
            cnt[k]--;

            if(cnt[k]==0){ // very very important
              cnt.erase(k); 
            }
           
          }
      }

    
   }

   cout<<ans<<"\n";
  
return 0;

}
