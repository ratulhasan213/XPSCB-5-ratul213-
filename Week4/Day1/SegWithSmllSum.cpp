//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   ll sum;
   cin>>n>>sum;
   ll arr[n];
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }


   int start = 0;
   int end = 0;

   ll s = 0;
   int ans = 0;

   while (end<n)
   {
       s+=arr[end];

       if(s<=sum){
          ans = max(ans,end-start+1);
       }
       else{
         while (s>sum && start<=end)
         {
            s-=arr[start];
             start++;
         }
         
       }
       end++;
   }


   cout<<ans<<"\n";
   
   
   

return 0;

}

/*

7 20
2 6 4 3 6 8 9

*/