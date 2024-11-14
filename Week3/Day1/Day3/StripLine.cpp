//https://codeforces.com/problemset/problem/1690/D
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
        int n,k;
        cin>>n>>k;

       string s;
       cin>>s;
       queue<int>qu;
       
       int white = 0;
       for (int i = 0; i <k; i++)
       {
           if(s[i]=='W'){
             white++;
           }
       }

       int ans = white;
  
 


       for (int i = k; i <n; i++)
       {
             if(s[i-k]=='W'){
                white--;
              
              
             }


             if(s[i]=='W'){
                white++;
                 
               
             }

     

            ans = min(ans,white);
        

       }
       
      cout<<ans<<"\n";

       
   }
   

return 0;

}
