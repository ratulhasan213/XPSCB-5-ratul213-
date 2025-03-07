//https://cses.fi/problemset/task/1619/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   ll n;
   cin>>n;
   vector<ll>come;
   vector<ll>go;
   ll c,g;
   for (int i = 0; i <n; i++)
   {
       cin>>c>>g;
       come.push_back(c);
       go.push_back(g);
   }


   sort(come.begin(),come.end());
   sort(go.begin(),go.end());

   ll ans = -1;
   ll cnt = 0;
   c = 0, g = 0;
   
   while (c<n && g<n)
   {
      ll cv = come[c];
      ll gv = go[g];

      if(cv<=gv){
        cnt++;
        c++;
      }
      ans = max(ans,cnt);

      if(cv>=gv){
        g++;
         cnt--;
      }
      
   }

   cout<<ans<<"\n";
   
   
   

return 0;

}


/*


3
5 8
2 4
3 9

*/