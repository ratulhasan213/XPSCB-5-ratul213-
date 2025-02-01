//https://codeforces.com/problemset/problem/1928/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   int test;
   cin>>test;
   while (test--)
   {
     int n;
     cin>>n;
     ll val;
     set<ll>st;
     for (int i = 0; i<n; i++)
     {
        cin>>val;
        st.insert(val);
     }

     vector<ll>arr;

     for(ll x: st){
        arr.push_back(x);
     }

    //  for(ll x: arr){
    //     cout<<x<<" ";
    //  }


      int len = arr.size();

      int ans = 1;
     for (int i = 0; i <len; i++)
     {
        int x = arr[i];
        auto it = lower_bound(arr.begin(),arr.end(),x+n);
        int d = it - arr.begin() - i;
        ans = max(ans,d);
     }

     cout<<ans<<"\n";
     
     
   }
   

return 0;

}



/*


1
5
1 101 1 100 1



7
2
1 2
4
7 1 4 1
3
103 102 104
5
1 101 1 100 1
5
1 10 100 1000 1
2
3 1
3
1000000000 999999997 999999999



*/