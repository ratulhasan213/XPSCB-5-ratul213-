//https://codeforces.com/problemset/problem/1828/B
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
       int srr[n];
       for (int i = 0; i <n; i++)
       {
            cin>>arr[i];
              srr[i] = arr[i];
       }


       sort(srr,srr+n);

       int ans = 0;

  
       for (int i = 0; i<n; i++)
       {
           int d = abs(arr[i] - srr[i]);
           ans = __gcd(ans,d);
       }

       cout<<ans<<"\n";
       
   }
   

return 0;

}



/*

7
3
3 1 2
4
3 4 1 2
7
4 2 6 7 5 3 1
9
1 6 7 4 9 2 3 8 5
6
1 5 3 4 2 6
10
3 10 5 2 9 6 7 8 1 4
11
1 11 6 4 8 3 7 5 9 10 2


*/