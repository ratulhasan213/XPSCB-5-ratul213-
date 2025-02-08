//https://codeforces.com/contest/1850/problem/F
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
    vector<int>cnt(n+1,0);
      int val;
   for (int i = 0; i <n; i++)
   {
      cin>>val;
      if(val<=n){
        cnt[val]++;
      }
   }
   
      

   


  vector<ll>v(n+1,0);
   for (int i = 1; i<=n; i++)
   {
           
       for (int j = i; j<=n; j+=i)
       {
           v[j]+=cnt[i];
       }
  

       
   }

   
        cout<<*max_element(v.begin(),v.end())<<"\n";

     
   }
   


return 0;

}









/*

1
6
3 1 3 4 9 10

7
5
1 2 3 4 5
3
2 2 2
6
3 1 3 4 9 10
9
1 3 2 4 2 3 7 8 5
1
10
8
7 11 6 8 12 4 4 8
10
9 11 9 12 1 7 2 5 8 10


*/