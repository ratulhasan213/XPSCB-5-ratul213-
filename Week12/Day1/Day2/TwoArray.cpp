//https://codeforces.com/problemset/problem/1584/C
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
      int a[n];
      int b[n];

      for (int i = 0; i <n; i++)
      {
        cin>>a[i];
      }

         for (int i = 0; i <n; i++)
      {
        cin>>b[i];
      }



      sort(a,a+n);
      sort(b,b+n);
      
      bool ans = true;
      for (int i = 0; i <n; i++)
      {
         if(a[i]!=b[i] && a[i]+1!=b[i]){
            ans = false;
            break;
         }
      }


      ans == true ? cout<<"YES\n" : cout<<"NO\n";
      

      

      
   }
   

return 0;

}