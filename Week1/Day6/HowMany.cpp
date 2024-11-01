//https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int s,t;
   cin>>s>>t;
   int total = 0;

   for (int i = 0; i <=s; i++)
   {
          for (int j = 0; j <=s-i; j++)
          {
                for (int k = 0; k <=s-i-j; k++)
                {
                     
                    if(i*j*k<=t){
                        total++;
                    }
                      
                }
                
          }
          
   }
   cout<<total;


return 0;

}