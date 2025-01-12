#include<bits/stdc++.h>
using namespace std;


int firstOccurance(int arr[], int n, int x){
    int ans = -1;
    int val = -1;
    
    int start = 0;
    int end = n-1;


    while (start<=end)
    {
        int mid = start+(end-start)/2;

        if(arr[mid] == x){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>x){
          end = mid-1;
        }
        else{
          start = mid+1;
        }
    }
    
   

    return ans;
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 
   
   int cs = 1;
  while (true)
  {
   int n,q;
  cin>>n>>q;

  if(n == 0 && q == 0){
    break;
  }
  int arr[n];
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }


   sort(arr,arr+n);
   int x;
   cout<<"CASE# "<<cs++<<":\n";
   for (int i = 0; i <q; i++)
   {
       cin>>x;
       int ans = firstOccurance(arr,n,x);
       
      
       if(ans == -1){
         cout<<x<<" not found\n";
       }
       else{
         cout<<x<<" found at "<<ans+1<<"\n";
       } 
   }
   
  }
  
 

   

return 0;

}



/*

4 1
2
3
5
1
5
5 2
1
3
3
3
1
2
3
0 0

CASE# 1:
5 found at 4
CASE# 2:
2 not found
3 found at 3


*/