//https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        
        long long int sum = 0;
        int n = arr.size();
        
        int start = 0;
        int end = 0;
        
        map<long long int, int>check;

        check[sum] = 0;
        int ans = -1;
        
        while(end<n){

            
            sum+=(arr[end]);
            
            if(check.count(sum)){
                int old = check[sum];
                check[sum] = min(old,end+1);
            }
            else{
                 check[sum] = end+1;
            }
           
            
            if(check.count(sum-k)){
                int index = check[sum-k];

                ans = max(end+1-index,ans);
                
            }

            end++;
        }
        return ans;
    }
};

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

  vector<int>v = {10,5,2,7,1,9};
  int k = 15;

  Solution solve;
  
  
  int ans = solve.lenOfLongestSubarr(v,k);
  cout<<ans<<"\n";  

return 0;

}
