//https://codeforces.com/problemset/problem/1744/C
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n;
       char ch;
       cin>>n>>ch;
       string s;
       cin>>s;
       
       
       s = s+s;
       int len = 2*n;
       vector<int>v(len,-1);

       int nearest = -1;
      
      for (int i = len-1; i>=0; i--)
      {
          if(s[i]=='g'){
            nearest = i;
          }
          else{
            if(nearest!=-1){
                v[i] = abs(i-nearest);
            }
          }
      }


     int ans = -1;
    for (int i = 0; i <n; i++)
    {
        if(s[i]==ch){
            ans = max(ans,v[i]);
        }
    }

    if(ans==-1){
        cout<<0<<"\n";
    }
    else{
       cout<<ans<<"\n";
    }
    
      
   }
   

return 0;

}







/*


1
5 r
rggry



6
5 r
rggry
1 g
g
3 r
rrg
5 y
yrrgy
7 r
rgrgyrg
9 y
rrrgyyygy



*/