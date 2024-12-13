//https://codeforces.com/problemset/problem/1763/A
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
        for (int i = 0; i <n; i++)
        {
            cin>>arr[i];
        }

       ll mx = arr[0];
       ll mn = arr[0];

        for (int i = 0; i <n; i++)
        {
            mx = mx | arr[i];
            mn = mn & arr[i];
        }

        cout<<(mx - mn)<<"\n";
                   
   }
   

return 0;

}