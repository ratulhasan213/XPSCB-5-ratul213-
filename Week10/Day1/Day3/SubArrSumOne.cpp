//https://cses.fi/problemset/task/1660
#include<bits/stdc++.h>
using namespace std;
int CountSubArray2(vector<int> &arr, long long int target){
     
     int start = 0;
     int end = 0;
     int len = arr.size();
     long long int sum = 0;
     int ans = 0;
     while (end<len)
     {
         
        sum+=arr[end]; 
         
        while (sum>target && start<=end)
        {
          
            sum-=arr[start];
            start++;
        }
         if(sum == target){
               ans++;
         }
        end++;
         
        
     }
 
     return ans;
     
}

int CountSubArray(vector<int> &arr, long long int target){
     
     int start = 0;
     int end = 0;
     int len = arr.size();
     long long int sum = 0;
     int ans = 0;
     while (end<len)
     {
         
        sum+=arr[end]; 

        while (sum>=target && start<=end)
        {
            if(sum == target){
               ans++;
            }
            sum-=arr[start];
            start++;
        }
        end++;
         
        
     }

     return ans;
     
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   int n,x;
   cin>>n>>x;
   vector<int>arr;
   int val;
   for (int i = 0; i <n; i++)
   {
      cin>>val;
      arr.push_back(val);
   }
   
   cout<<CountSubArray(arr,x)<<"\n";

    // cout<<CountSubArray2(arr,x)<<"\n";

return 0;

}



/*

5 7
2 4 1 2 7


*/