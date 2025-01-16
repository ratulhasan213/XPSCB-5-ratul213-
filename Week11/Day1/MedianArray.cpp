//https://codeforces.com/problemset/problem/1946/A
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
       for (int i = 0; i<n; i++)
       {
          cin>>arr[i];
       }

    sort(arr,arr+n);

       int m = (n-1)/2;
      
      ll x = arr[m];
    
         ll need = x+1;
         ll ans = need - arr[m];
         for (int i = m+1; i<n; i++)
         {
            if(arr[i]>=need){
                break;
            }
            else{
                ans+= (need - arr[i]);
            }
         }
         
         cout<<ans<<"\n";
         
    

    

       
   }
   


return 0;

}



/*

1
4
7 3 3 1


8
3
2 2 8
4
7 3 3 1
1
1000000000
5
5 5 5 4 5
6
2 1 2 3 1 4
2
1 2
2
1 1
4
5 5 5 5



*/