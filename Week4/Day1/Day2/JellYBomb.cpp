//https://codeforces.com/problemset/problem/1875/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
     ll a,b,n;
     cin>>a>>b>>n;

     ll time = 0;
     
     for (int i = 0; i <n; i++)
     {
         ll tool;
         cin>>tool;

          time = time + (b-1);
          b =  b - (b-1);
          b = b + tool;
          if(b>a){
            b = a;
          }

     }

     cout<<time+b<<"\n";
     
   }
   

return 0;

}

/*

2
5 3 3
1 1 7
7 1 5
1 2 5 6 8


*/