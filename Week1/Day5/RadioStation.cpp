//https://codeforces.com/contest/918/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n,m;
   cin>>n>>m;
   map<string,string>mp1;
   map<string,string>mp2;
   
   string name,id;

   for (int i =1; i <=n; i++)
   {
       cin>>name>>id;
       mp1[id] = name;
   }

   for (int i = 1; i <=m; i++)
   {
      cin>>name>>id;
      id.pop_back();
      string command = mp1[id];
      cout<<name<<" "<<id<<";"<<" #"<<command<<"\n";
   }
   
   

return 0;

}
