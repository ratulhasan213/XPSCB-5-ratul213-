//https://codeforces.com/problemset/problem/600/B
#include<bits/stdc++.h>
#define ll long long int
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

  ll n,m;
  cin>>n>>m;
  vector<ll>arr(m);
  pbds<ll>pb;
  ll val;

  for (int i = 0; i<n; i++)
  {
     cin>>val;
     pb.insert(val);
  }

  for (int i = 0; i<m; i++)
  {
    cin>>arr[i];
  }


  
  for (int i = 0; i<m; i++)
  {
      ll x = pb.order_of_key(arr[i]+1);
      cout<<x<<" ";
  }
  
  cout<<"\n";


return 0;

}


/*

5 4
1 3 5 7 9
6 4 2 8



5 5
1 2 1 2 5
3 1 4 1 5





*/
