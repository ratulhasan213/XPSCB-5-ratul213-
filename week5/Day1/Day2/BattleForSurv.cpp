//https://codeforces.com/problemset/problem/2013/B
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

       int indx = n-3;
       ll num = arr[n-2];

       while (indx>=0)
       {
             num-=arr[indx];
             indx--;
       }

       cout<<arr[n-1]-num<<"\n";
       
       
   }
   

return 0;

}
/*

5
2
2 1
3
2 2 8
4
1 2 4 3
5
1 2 3 4 5
5
3 2 4 5 4


*/