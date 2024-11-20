//https://codeforces.com/problemset/problem/1791/G1
#include<bits/stdc++.h>
#define ll long  long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n;
       ll coin;
       cin>>n>>coin;
       ll arr[n];

       for (int i = 0; i <n; i++)
       {
           cin>>arr[i];
           arr[i] = arr[i]+i+1;
       }


       sort(arr,arr+n);
        
        int ans = 0;
        ll c = 0;
       for (int i = 0; i <n; i++)
       {
           c+=arr[i];
           if(c<=coin){
             ans++;
           }
           else{
            break;
           }
       }

       cout<<ans<<"\n";
       
       
   }
   

return 0;

}

/*


10
5 6
1 1 1 1 1
8 32
100 52 13 6 9 4 100 35
1 1
5
4 5
4 3 2 1
5 9
2 3 1 4 1
5 8
2 3 1 4 1
4 3
2 3 4 1
4 9
5 4 3 3
2 14
7 5
5 600000000
500000000 400000000 300000000 200000000 100000000




2
2
0
1
2
2
1
1
1
2


*/