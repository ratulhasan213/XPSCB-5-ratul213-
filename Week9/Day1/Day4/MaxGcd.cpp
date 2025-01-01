//https://codeforces.com/problemset/problem/1370/A
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
    //   cout<<(n/2)<<" "<<(n/2)*2<<"\n";

    int a = (n/2);
    int b = (n/2)*2;

    cout<<__gcd(a,b)<<"\n";
      
   }
   

return 0;

}