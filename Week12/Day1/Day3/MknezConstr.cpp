//https://codeforces.com/problemset/problem/1779/B
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
      if(n%2==0){
        cout<<"YES\n";
        for (int i = 1; i <=n; i++)
        {
            if(i%2==0){
                cout<<2<<" ";
            }
            else{
                cout<<-2<<" ";
            }
        }
        cout<<"\n";
        
      }
      else{
         int a = n/2;
         int b = a-1;
         if(b == 0){
          cout<<"NO\n";
         }
         else{
          cout<<"YES\n";
          for (int i = 1;i<=n; i++)
          {
              if(i%2==1){
                cout<<-b<<" ";
              }
              else{
                cout<<a<<" ";
              }
          }

           cout<<"\n";
          
         }
      }
 
   }
   

return 0;

}


/*

3
2
3
5


*/