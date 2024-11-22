//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
   
     multiset<ll>ms;

   int start = 0;
   int end = 0;
   ll ans = 0;

   while (end<n)
   {
        ms.insert(arr[end]);
        ll min = *ms.begin();
        ll max = *ms.rbegin();


       while (max-min>k)
       {
           auto it = ms.find(arr[start]);
           ms.erase(it);
           start++;
           min = *ms.begin();
           max = *ms.rbegin();
        
       }
       
    
       ans+=(end-start+1);
 
       
       end++;
   }
   
    cout<<ans<<"\n";


return 0;

}

/*

7 3
2 6 4 3 6 8 9


*/