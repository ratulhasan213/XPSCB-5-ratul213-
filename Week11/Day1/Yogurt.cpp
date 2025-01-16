//https://codeforces.com/problemset/problem/1955/A
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   int test;
   cin>>test;
   while (test--)
   {
     int n,a,b;
     cin>>n>>a>>b;

     int x = n*a;

     int y = (n/2)*b;
     y+=(n%2)*a;

     cout<<min(x,y)<<"\n";
   }
   
   

return 0;

}