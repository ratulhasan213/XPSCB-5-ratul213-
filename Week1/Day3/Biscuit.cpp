#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int a,b,t;
   cin>>a>>b>>t;
   int biscuits = 0; 
   while (t-a>=0)
   {
       biscuits+=b;
       t = t-a;
       
   }
   cout<<biscuits<<"\n";
   

return 0;

}