//https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   string s;
   cin>>s;
   bool ans = false;
   map<char,bool>mp;
   for(char ch:s){
      mp[ch] = true;
   }
     
     for (char i = 'a'; i <='z'; i++)
     {
           if(mp[i]==false){
            cout<<i;
            ans = true;
              break;
           }
     }
     

   if(!ans){
      cout<<"None";
   } 

return 0;

}

/*

atcoderregularcontest

abcdefghijklmnopqrstuvwxyz

fajsonlslfepbjtsaayxbymeskptcumtwrmkkinjxnnucagfrg


*/