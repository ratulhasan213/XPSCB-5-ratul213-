//https://codeforces.com/problemset/problem/1997/A
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   while (n--)
   {
      string s;
      cin>>s;
      string ans; 
      ans.push_back(s[0]);

      int len = s.size();
      bool done = false;
      for (int i = 1; i < len; i++)
      {
          if(!done && s[i]== s[i-1]){
              
              if(s[i]=='a'){
                ans.push_back('b');
                ans.push_back(s[i]);
                done = true;
              }
              else{
                ans.push_back('a');
                ans.push_back(s[i]);
                done = true;
              }
          }
          else{
            ans.push_back(s[i]);
          }
      }
      
     if(!done){
        if(s[len-1]=='a'){
          ans.push_back('b');
        }
        else{
          ans.push_back('a');
        }
     }
      cout<<ans<<"\n";
      
   }
   

return 0;

}
