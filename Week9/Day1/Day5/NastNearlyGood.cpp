//https://codeforces.com/problemset/problem/1521/A
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
       ll a,b;
       cin>>a>>b;
       if(b==1){
        cout<<"NO\n";
       }
       else{
          cout<<"YES\n";
          cout<<a<<" "<<(a*b)<<" "<<a+(a*b)<<"\n";
       }
      
   }
   

return 0;

}