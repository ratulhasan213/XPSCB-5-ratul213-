//https://www.codechef.com/problems/CHOLY
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int x,y,z;
   cin>>x>>y>>z;
   
   int rem = 4;
   
   double p = 0;

   double op = 0;
    
   rem-=x; 
   p+=(x*1);

   rem-=z;
   op+=(z*1);

   p+=(y*0.5);
   op+=(y*0.5);
   rem-=y;


   p+=(rem*1);


   if(p>op){
     cout<<"YES\n";
   }
   else{
    cout<<"NO\n";
   }


   
   
   

return 0;

}

/*

1 1 0



2 0 2




0 1 1




0 2 1




*/