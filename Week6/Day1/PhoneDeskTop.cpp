//https://codeforces.com/problemset/problem/1974/A
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
       ll x,y;
       cin>>x>>y;

       if(x==0){
          cout<<ceil(y/2.0)<<"\n";
       }
       else if(y==0){
         cout<<ceil(x/15.0)<<"\n";
       }
       else{
               ll display = ceil(y/2.0);
               ll remCell = (display*15) - (y*4);
               if(x>remCell){
                  int t = x-remCell;
                  display+= ceil(t/15.0);
               }
              cout<<display<<"\n";

       }
              


     }
   

return 0;

}

/*

1
7 2


11
1 1
7 2
12 4
0 3
1 0
8 1
0 0
2 0
15 0
8 2
0 9


*/