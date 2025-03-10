//https://codeforces.com/problemset/problem/1915/F
#include<bits/stdc++.h>
#define ll long long int
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template<typename T> using pbds = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n;
      cin>>n;
      vector<pair<ll,ll>>arr;
      pbds<ll>pb;
      ll a,b;
      for (int i = 0; i <n; i++)
      {
         cin>>a>>b;
         arr.push_back(make_pair(a,b));
         pb.insert(b);
      }


      sort(arr.begin(),arr.end());
       
      ll ans = 0;
      for(auto p : arr){
         ll f = p.first;
         ll s = p.second;

         ans+=(pb.order_of_key(s));
         pb.erase(s);

      }


      cout<<ans<<"\n";
      
      
   }
   

return 0;

}


/*


5
2
2 3
1 4
6
2 6
3 9
4 5
1 8
7 10
-2 100
4
-10 10
-5 5
-12 12
-13 13
5
-4 9
-2 5
3 4
6 7
8 10
4
1 2
3 4
5 6
7 8



*/