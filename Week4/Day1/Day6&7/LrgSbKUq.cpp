//https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        
        int n = s.size();
        
        map<char,int>cnt;
        
        int start = 0;
        int end = 0;
        
        int ans = -1;
        while(end<n){
            cnt[s[end]]++;
            
            while(cnt.size()>k && start<=end){
                cnt[s[start]]--;
                if(cnt[s[start]]==0){
                    cnt.erase(s[start]);
                }
                start++;
            }
            
            if(cnt.size()==k){
              ans = max(ans,end-start+1);
            }
          
            end++;
        }
        return ans;
    }
};


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


  Solution solve;

  // s = "aaa";
  // k = 2;

  // s = "aaabaaab";
  // k = 2;

  string s = "aabacbebebe";
  int k = 3;
 cout<<solve.longestKSubstr(s,k)<<"\n";
   

return 0;

}