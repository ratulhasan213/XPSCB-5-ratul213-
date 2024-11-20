//https://vjudge.net/contest/672779#problem/C
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
       string s;
       cin>>n>>s;

       int makeZero = 0;
       int makeOne = 0;


        // makeZero;

        bool hasOneStarted = false;
       for (int i = 0; i <n; i++)
       {
            if(s[i]=='1'){
                if(hasOneStarted == false){
                    makeZero++;
                    hasOneStarted = true;
                }
            }
            else{
                hasOneStarted = false;
            }
       }



          // makeOne;
        bool hasZeroStarted = false;
       for (int i = 0; i <n; i++)
       {
            if(s[i]=='0'){
                if(hasZeroStarted == false){
                    makeOne++;
                    hasZeroStarted = true;
                }
            }
            else{
                hasZeroStarted = false;
            }
       }


       cout<<min(makeZero,makeOne)<<"\n";
       
   }
   

return 0;

}