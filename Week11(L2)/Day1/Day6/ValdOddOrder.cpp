//https://codeforces.com/problemset/problem/1926/E
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
      int n,k;
      cin>>n>>k;
     

         ll ans = -1;

       ll i = 0;
      while (1)
      {
         ll x = (1<<i);
         ll total = (n+x)/(2*x);
         if(k<=total){
            ll gap = 2*x;
            ans = x+(k-1)*gap;
            break;
          }
          else{
            k-=total;
          }
          i++;
        }
   
        cout<<ans<<"\n";
      
   }
   

return 0;

}



/*


7
7 1
7 2
7 3
7 4
7 5
7 6
7 7




11
7 1
7 2
7 3
7 4
7 5
7 6
7 7
1 1
34 14
84 19
1000000000 1000000000



*/




