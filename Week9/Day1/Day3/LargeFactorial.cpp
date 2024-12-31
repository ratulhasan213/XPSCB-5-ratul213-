//https://www.codechef.com/problems/FUM
#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;


int fact(int n){
    if(n == 0){
        return 1;
    } 
   
    return (1LL* n%mod * fact(n-1)%mod)%mod;
   
}


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n;
       cin>>n;
       cout<<fact(n)<<"\n";
       
   }
   

return 0;

}



/*


int f(int n){
    if(n==0){
        return 1;
    }

    return n*fact(n-1);
}

*/