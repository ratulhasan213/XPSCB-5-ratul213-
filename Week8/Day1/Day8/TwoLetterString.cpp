//https://codeforces.com/problemset/problem/1669/E
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
      string s;
      vector<string>arr;
     
      map<string,ll>occ;
      map<char,ll>Focc;
      map<char,ll>Socc;

      for (int i = 1; i <=n; i++)
      {
           cin>>s;
           arr.push_back(s);
           occ[s]++;
           Focc[s[0]]++;
           Socc[s[1]]++;
      }



      ll ans = 0;

      for(string key: arr){

         ll val = occ[key];   
         ll fo = Focc[key[0]];
         ll so = Socc[key[1]];
         ans+= max(0LL,fo-val);
         ans+=max(0LL,so-val);


         if(val>0){
            occ[key] = val-1;
         }

         if(fo>0){
            Focc[key[0]] = fo-1;
         }

         if(so>0){
            Socc[key[1]] = so-1;
         }
      }


      cout<<ans<<"\n";


   
      
   

   }
   

return 0;

}


/*


1
5
jf
jf
jk
jk
jk




4
6
ab
cb
db
aa
cc
ef
7
aa
bb
cc
ac
ca
bb
aa
4
kk
kk
ab
ab
5
jf
jf
jk
jk
jk



*/