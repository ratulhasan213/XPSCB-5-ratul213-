//https://codeforces.com/problemset/problem/637/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   stack<string>st;

   while (n--)
   {
       string s;
       cin>>s;
       st.push(s);
   }

   map<string,bool>mp;
   while (!st.empty())
   {
      string s = st.top();
      st.pop();
      if(!mp[s]){
         cout<<s<<"\n";
         mp[s] = true;
      }
   }
   
   

return 0;

}