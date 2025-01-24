//https://codeforces.com/problemset/problem/1791/E
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


      sort(arr,arr+n);



      for (int i = 1; i <n; i++)
      {
         if(arr[i]>=0 && arr[i-1]>=0){
            continue;
         }
          else if(arr[i]<0 && arr[i-1]<0){
             arr[i] = -1*arr[i];
             arr[i-1] = -1*arr[i-1];
          }
          else if(arr[i]<0 && abs(arr[i])>abs(arr[i-1])){
               arr[i] = -1*arr[i];
               arr[i-1] = -1*arr[i-1];
          }
          else if(arr[i-1]<0 && abs(arr[i-1])>abs(arr[i])){
             arr[i] = -1*arr[i];
             arr[i-1] = -1*arr[i-1];
          }
      }
      


      ll sum = 0;


      for (int i = 0; i <n; i++)
      {
        sum+=arr[i];
      }
      
      cout<<sum<<"\n";
      

   }
   

return 0;

}



/*


5
3
-1 -1 -1
5
1 5 -5 0 2
3
1 2 3
6
-1 10 9 8 7 6
2
-1 -1


*/