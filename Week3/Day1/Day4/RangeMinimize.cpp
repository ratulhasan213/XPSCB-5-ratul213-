//https://www.codechef.com/problems/MNR
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
      for (int i = 0; i <n; i++)
      {
         cin>>arr[i];
      }

       sort(arr,arr+n);

      if(n>3){

             // after deleting last two index
             //remaining:

               int mx = arr[n-3];
               int mn = arr[0];

              int ans = mx - mn;

              //after deleting first two index
              //remaing:
              
              mn = arr[2];
              mx = arr[n-1];
             
             int temp = mx - mn;
             
             ans = min(ans,temp);


             //after deleting the first and last:
             //remaing:

             mn = arr[1];
             mx = arr[n-2];

             temp = mx - mn;

             ans = min(temp,ans);


             cout<<ans<<"\n";


           
      }
      else{
        cout<<0<<"\n";
      }

     


      
   }
   

return 0;

}