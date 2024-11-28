//https://codeforces.com/problemset/problem/1421/A
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   
   int test;
   cin>>test;
   while (test--)
   {
       int a,b;
       cin>>a>>b;

       cout<<(a xor a)+(b xor a)<<"\n";
   }
   

return 0;

}

/*

6
6 12
4 9
59 832
28 14
4925 2912
1 1


*/