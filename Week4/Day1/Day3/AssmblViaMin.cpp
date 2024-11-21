//https://codeforces.com/problemset/problem/1857/C
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

     int len = (n*(n-1))/2;
      ll arr[len];
     for (int i = 0; i <len; i++)
     {
         cin>>arr[i];
     }


     sort(arr,arr+len);

     vector<ll>ans;

     int ind = 0;
     int t = 1;

     while (ind<len)
     {
         ans.push_back(arr[ind]);

         ind+=(n-t);
         t++;
     }

     ans.push_back(ans.back());

     for(int x: ans){
      cout<<x<<" ";
     }

     cout<<"\n";
     
     

   }
   

return 0;

}


/*



1
5
2 2 2 2 2 2 2 2 2 2

5
3
1 3 1
2
10
4
7 5 3 5 3 3
5
2 2 2 2 2 2 2 2 2 2
5
3 0 0 -2 0 -2 0 0 -2 -2


*/