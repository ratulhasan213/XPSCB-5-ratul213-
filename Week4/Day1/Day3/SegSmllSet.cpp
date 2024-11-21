//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   ll k;
   cin>>n>>k;
   ll arr[n];
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }

   map<ll,ll>cnt;


   int start = 0;
   int end = 0;
   
   ll ans = 0;

   while (end<n)
   {
            
            cnt[arr[end]]++;
            while (cnt.size()>k && start<=end)
            {
                 cnt[arr[start]]--;
                 if(cnt[arr[start]]==0){
                     cnt.erase(arr[start]);
                 }
                 start++;
            }

            ans+=(end-start+1);

            end++;
            
       
      
   }

   cout<<ans<<"\n";
   
   

   
   

return 0;

}


/*

7 3
2 6 4 3 6 8 3


*/