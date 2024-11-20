//https://www.codechef.com/problems/FOOTBALLTIES
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int x, y;
       cin>>x>>y;
       cout<<x%3<<"\n";
   }
   

return 0;

}


/*

4
1 1
3 0
11 5
9 9


1
0
2
0

*/