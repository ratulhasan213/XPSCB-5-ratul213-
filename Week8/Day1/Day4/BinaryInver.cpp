//https://codeforces.com/problemset/problem/1760/E
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
      int one[n];
      int zero[n];
      for (int i = 0; i <n; i++)
      {
         cin>>arr[i];
         one[i] = arr[i];
         zero[i] = arr[i];
      }

      ll initial = 0;
      int z = 0;
      for (int i = n-1; i>=0; i--)
      {
          if(arr[i]==0){
            z++;
          }
          else{
            initial+=(z);
          }
      }

    //   cout<<initial<<"\n";

    //puting 1:

    for (int i = 0; i <n; i++)
    {
         if(one[i]==0){
            one[i] = 1;
            break;
         }
    }

     ll forOne = 0;
     z = 0;
     for (int i = n-1; i>=0; i--)
      {
          if(one[i]==0){
            z++;
          }
          else{
            forOne+=(z);
          }
      }



      //putting 0;
       
    for (int i = n-1; i>=0; i--)
    {
         if(zero[i]==1){
            zero[i] = 0;
            break;
         }
    }


      ll forZero = 0;
      z = 0;
     for (int i = n-1; i>=0; i--)
      {
          if(zero[i]==0){
            z++;
          }
          else{
            forZero+=(z);
          }
      }


      ll ans = max(initial,forOne);
      ans = max(ans,forZero);

      cout<<ans<<"\n";

      
      
   }
   

return 0;

}

/*

5
4
1 0 1 0
6
0 1 0 0 1 0
2
0 0
8
1 0 1 1 0 0 0 1
3
1 1 1


*/