//https://codeforces.com/problemset/problem/1856/B
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
      ll cnt = 0;
      ll sum = 0;
      ll afterSum = 0;
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i] == 1){
           arr[i] = 2;
        }
        else{
            arr[i] = 1;
        }
        afterSum+=arr[i];
      }
     

     if( n>1 && afterSum<=sum){
        cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }
      
      
   }
   

return 0;

}




/*

6
3
6 1 2
2
1 1
4
3 1 2 4
1
17
5
1 2 1 1 1
3
618343152 819343431 1000000000


*/