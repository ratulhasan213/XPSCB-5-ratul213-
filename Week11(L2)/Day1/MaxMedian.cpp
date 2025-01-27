//https://codeforces.com/problemset/problem/1201/C
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


      ll n,k;
      cin>>n>>k;
      ll arr[n];
      for (ll i = 0; i <n; i++)
      {
         cin>>arr[i];
      }


      sort(arr,arr+n);

      ll midIndx = n/2;


      auto canMake = [&] (ll mid){
             
            int temp = k;
            for (int i = midIndx; i<n; i++)
            {
                if(arr[i]<mid){
                    temp-= mid-arr[i];
                }

                if(temp<0){
                    return false;
                }
            }
            
         

         return true;
      };
      


      ll start = 1;
      ll end = 1e12;
      int ans = -1;
      while (start<=end)
      {
          ll mid = start+(end-start)/2;

          if(canMake(mid)){
              ans = mid;
              start = mid+1;
          }
          else{
            end = mid-1;
          }
      }

      cout<<ans<<"\n";
      
      
   
   

return 0;

}


/*

3 2
1 3 5


*/