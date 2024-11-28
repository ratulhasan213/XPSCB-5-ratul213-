//https://www.codechef.com/problems/MINMXOR
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
       int arr[n];

       int xr = 0;

       for (int i = 0; i <n; i++)
       {
           cin>>arr[i];
           xr = (xr xor arr[i]);
       }
       
       int ans = xr;
       for (int i = 0; i <n; i++)
       {
            xr = (xr xor arr[i]);
            ans = min(xr,ans);
            xr = (xr xor arr[i]);
       }
       
      cout<<ans<<"\n";
       
       
   }
   

return 0;

}

/*

1
2
4 4


3
4
2 4 3 6
2
4 4
5
1 3 5 17 9



1
5
1 3 5 17 9

*/