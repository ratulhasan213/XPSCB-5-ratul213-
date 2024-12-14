//https://codeforces.com/problemset/problem/1527/A
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
      ll n;
      cin>>n;

      int len = __lg(n);
      
      ll ans = 0;
      for (int i = 0; i <len; i++)
      {
        ans+=(1<<i);
      }

      cout<<ans<<"\n";
      
   }
   

return 0;

}



/*


1
17


*/