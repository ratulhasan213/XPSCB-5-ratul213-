//https://codeforces.com/contest/706/problem/B
#include<bits/stdc++.h>
using namespace std;


int CountSnacks(int arr[], int n, int target){
    int ans = 0;

   int start = 0;
   int end = n-1;

   while (start<=end)
   {
      int mid = start+(end-start)/2;
      if(arr[mid]<=target){
        ans+=(mid - start)+1;
        start = mid+1;
      }
      else{
         end = mid-1;
      }
   }


    return ans;
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }


   sort(arr,arr+n);
   int q;
   cin>>q;
   int target;
   for (int i = 0; i <q; i++)
   {
      cin>>target;
      cout<<CountSnacks(arr,n,target)<<"\n";
   }
   
   
   

return 0;

}



/*


5
3 10 8 6 11
4
1
10
3
11


*/