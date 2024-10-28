#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;

   int digits=0;

   int number = n;

   while (number>0)
   {
       digits++;
       number=number/10;
   }

   int zero = 4-digits;

   if(n==0){
    zero = 3;
   }

   if(zero){
       for (int i = 1; i <=zero; i++)
      {
         cout<<"0";
      }
   }

  
   cout<<n<<"\n";
 
   
   
   

return 0;

}