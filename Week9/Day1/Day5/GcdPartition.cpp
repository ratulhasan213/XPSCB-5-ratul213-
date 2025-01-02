//https://codeforces.com/problemset/problem/1780/B
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
       int n;
       cin>>n;
       ll arr[n];
       ll sum = 0;
       for (int i = 0; i<n; i++)
       {
          cin>>arr[i];
          sum+=arr[i];
       }

       ll pref[n];
       pref[0] = arr[0];
       for (int i = 1; i <n; i++)
       {
            pref[i] = pref[i-1]+arr[i];
       }


    //    for (int i = 0; i <n; i++)
    //    {
    //        cout<<pref[i]<<" ";
    //    }
       

       ll ans = 1;

       for (int i = 0; i <n; i++)
       {
           ll x = sum - pref[i];
        //    cout<<x<<" "<<pref[i]<<"\n";
           if(x>0){
              ans = max(ans,__gcd(x,pref[i]));
           }
          
       }
       
       cout<<ans<<"\n";
       
   }
   

return 0;

}
/*

1
4
2 2 1 3


6
4
2 2 1 3
2
1 2
3
1 4 5
6
1 2 1 1 1 3
10
12 30 37 88 12 78 89 17 2 12
6
7 7 7 7 7 7


*/