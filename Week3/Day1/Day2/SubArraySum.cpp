#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   int arr[n];
   for (int  i = 0; i <n; i++)
   {
      cin>>arr[i];
   }

   int k;
   cin>>k;

   int sum = 0;

   for (int i = 0; i <k; i++)
   {
       sum+=arr[i];
   }

   int ans = sum;

   for (int i = k; i <n; i++)
   {
       sum+=(arr[i] - arr[i-k]);
       ans = max(ans,sum); 
   }
   
   cout<<ans<<"\n";





   cout<<"\n\n\nPhitron approach: \n";

   int left = 0, right = 0;

   int s = 0;
   int res = 0;


   while (right<n)
   {
      s+=arr[right];

      if(right-left+1==k){
        // window:
        res = max(res,s);
        s-=arr[left];
        left++;
        right++;
      }
      else{
        right++;
      }
   }
   
   cout<<res<<"\n";
   

return 0;

}


/*

7
2 1 6 7 3 1 2
3

*/