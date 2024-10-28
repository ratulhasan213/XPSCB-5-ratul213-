#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int a,b;
   cin>>a>>b;
   int coins = 0;
   if(a>b){
      coins+=a;
      a--;
      if(a>b){
        coins+=a;
      }
      else{
        coins+=b;
      }
   }
   else{
    coins+=b;
    b--;
    if(a>b){
        coins+=a;
    }
    else{
        coins+=b;
    }
   }

   cout<<coins<<"\n";

return 0;

}