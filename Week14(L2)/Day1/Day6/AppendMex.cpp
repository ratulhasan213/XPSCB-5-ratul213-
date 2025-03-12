//https://codeforces.com/problemset/problem/1054/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   vector<ll>arr(n);
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }

   if(arr[0]!=0){
    cout<<"1\n";
   }
   else{
    set<ll>seen;
    seen.insert(0);
    ll ans = -1;
    ll m = 0;
    for (int i = 1; i<n; i++)
    {
        ll val = arr[i];
     
        if(seen.count(val) || val == m+1){
            seen.insert(val);
            m = max(m,val);
            continue;
        }
        else{
           ans = i+1;
           break;
        }
    }



     cout<<ans<<"\n";

   }
   

return 0;

}






/*



8
0 1 2 3 4 5 4 6

4
0 1 4 5

4
0 1 2 1



3
1 0 1



4
0 1 2 239





*/