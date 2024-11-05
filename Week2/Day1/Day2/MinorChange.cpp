//https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   string s,t;
   cin>>s>>t;
   int len = t.size();

   int changeNeeded = 0;
   
   for (int i = 0; i <len; i++)
   {
       if(s[i]!=t[i]){
             changeNeeded++;
       }
   }

   cout<<changeNeeded<<"\n";
   

return 0;

}