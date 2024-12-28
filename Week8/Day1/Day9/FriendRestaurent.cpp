//https://codeforces.com/problemset/problem/1729/D
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
     ll x[n],y[n];
     for (int i = 0; i <n; i++)
     {
        cin>>x[i]; // cost
     }

      for (int i = 0; i <n; i++)
     {
        cin>>y[i]; // budget
     }


     vector<ll>arr;
    
     
   ll zr = 0;
       for (int i = 0; i <n; i++)
     {
        ll val = y[i] - x[i];
        arr.push_back(val);
     }



     sort(arr.begin(),arr.end());

  int start = 0;
  int end = n-1;

  ll ans = 0;

     while (start<end)
     {
        if(arr[start]+arr[end]>=0){
            ans++;
            start++;
            end--;
        }
        else{
           start++;
        }
     }
     
     cout<<ans<<"\n";

     

   }
   

return 0;

}

/*


1
6
8 3 9 2 4 5
5 3 1 4 5 10



6
6
8 3 9 2 4 5
5 3 1 4 5 10
4
1 2 3 4
1 1 2 2
3
2 3 7
1 3 10
6
2 3 6 9 5 7
3 2 7 10 6 10
6
5 4 2 1 8 100
1 1 1 1 1 200
6
1 4 1 2 4 2
1 3 3 2 3 4


*/