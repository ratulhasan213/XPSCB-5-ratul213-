//https://codeforces.com/problemset/problem/1722/A
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
       string name;
       cin>>n;
       cin>>name;
       map<char,int>cnt;

       if(n!=5){
        cout<<"NO\n";
       }
       else{
         
          for (int i = 0; i <n; i++)
          {
               cnt[name[i]]++;
          }

          bool ans = cnt['T'] == 1 &&  cnt['i'] == 1 && cnt['m'] ==1 &&  cnt['u'] ==1 && cnt['r'] == 1;

          if(ans){
            cout<<"YES\n";
          }  
          else{
            cout<<"NO\n";
          }
          
       }

      

   }
   

return 0;

}

