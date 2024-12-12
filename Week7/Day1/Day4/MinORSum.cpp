//https://codeforces.com/problemset/problem/1635/A
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
        
       ll m = -1;
       ll arr[n];
       for (int i = 0; i <n; i++)
       {
          cin>>arr[i];
       }

       sort(arr,arr+n);
        ll ans = arr[n-1] | arr[n-2];

        int indx = n-3;
        while (indx>=0)
        {
            /* code */
            ans = ans | arr[indx];
            indx-=1;
        }
        

    
       cout<<ans<<"\n";
       
        
   }
   

return 0;

}


/*

1
5
1 2 4 8 16

4
3
1 3 2
5
1 2 4 8 16
2
6 6
3
3 5 6


*/