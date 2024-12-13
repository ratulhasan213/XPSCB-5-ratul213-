//https://codeforces.com/problemset/problem/1559/A
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
       int arr[n];
      
     
       for (int i = 0; i <n; i++)
       {
              cin>>arr[i];
       }

         ll ans = arr[0];
         
        for (int i = 0; i <n; i++)
       {
              ans = ans & arr[i];
       }


       cout<<ans<<"\n";
       
   }
   

return 0;

}


/*


4
2
1 2
3
1 1 3
4
3 11 3 7
5
11 7 15 3 7



*/