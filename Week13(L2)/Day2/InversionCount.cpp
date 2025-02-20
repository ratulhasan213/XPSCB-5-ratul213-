//https://www.spoj.com/problems/INVCNT/
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
       ll n;
       cin>>n;
       vector<ll>arr(n);
       pbds<ll>pb;
       for (int i = 0; i <n; i++)
       {
          cin>>arr[i];
          pb.insert(arr[i]);
       }
       
       ll ans = 0;
       for (int i = 0; i <n; i++)
       {
           ll x = arr[i];
           pb.erase(x);
           ans+=pb.order_of_key(x);
       }
       
      cout<<ans<<"\n";
       
   }
   

return 0;

}


/*


2

3
3
1
2

5
2
3
8
6
1

*/