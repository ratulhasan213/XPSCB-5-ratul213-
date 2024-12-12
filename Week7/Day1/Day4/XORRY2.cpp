//https://www.codechef.com/problems/XORRY2
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
    int test;
    cin>>test;
    while(test--){
       ll x;
       cin>>x;
       int len = __lg(x);
       ll b = (1<<len);
       
       if(b==x){
           cout<<"1\n";
       }else{
           int c = 0;
           for (int k = len-1; k>=0; k--) {
               /* code */
               if(((1<<k) & x)==0){
                   ll temp = (1<<k);
                   if((b+temp)<=x){
                       c++;
                       b+=temp;
                   }
               }
           }
           
           cout<<(1<<c)<<"\n";
       }
    }
}
