//https://codeforces.com/problemset/problem/1857/A 
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
       int odd = 0;
       int val;
       for (int i = 0; i <n; i++)
       {
           cin>>val;
           if(val%2!=0){
            odd++;
           }
           
       }

       if(odd%2==0){
        cout<<"YES\n";
       }
       else{
        cout<<"NO\n";
       }
       
   }
   

return 0;

}