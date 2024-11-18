//https://codeforces.com/problemset/problem/1722/D
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
      cin>>n;
      string s;
      cin>>s;
     long long  int ans = 0 ;

      int initial[n];

      for (int i = 0; i <n; i++)
      {
         if(s[i]=='L'){

            initial[i] = i;
            ans+=initial[i];
            
         }
         else{
            initial[i] = n-i-1;
            ans+=initial[i];
         }

         
      }

      
      int change[n];
      for (int i = 0; i <n; i++)
      {
         int prev = initial[i];

          if(s[i]=='L'){
            //calculate for R:
            int now =  n-i-1;

            int ch = now - prev;
            if(ch>0){
                change[i] = ch;
            }  
            else{
                change[i] = 0;
            }

          }

          else{
               //calculate for L:
               int now =  i;

               int ch = now - prev;
               if(ch>0){
                change[i] = ch;
               }  
               else{
                change[i] = 0;
               }
          }
      }



  
      
      
      sort(change,change+n,greater<int>());
      //k=n, therefor:
      for (int i = 0; i <n; i++)
      {
           ans+=change[i];
           cout<<ans<<" ";
      }
      
      cout<<"\n";
      
      
   }
   

return 0;

}
