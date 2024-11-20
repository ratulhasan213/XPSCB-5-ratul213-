//https://codeforces.com/problemset/problem/1256/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       ll a,b,n,s;
       cin>>a>>b>>n>>s;


       if(a*n==s){
        cout<<"YES\n";
       }
       else if (a*n<s){
           if((a*n)+b>=s){
            cout<<"YES\n";
           }
           else{
            cout<<"NO\n";
           }
       }
       else{
         // a*n>s

         int t = s/n;
         
         if((t*n)+b>=s){
            cout<<"YES\n";
         }
         else{
            cout<<"NO\n";
         }
         
       }
   }
   

return 0;

}

/*

1
5 2 6 27


4
1 2 3 4
1 2 3 6
5 2 6 27
3 3 5 18


*/