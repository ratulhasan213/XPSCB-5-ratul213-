//https://codeforces.com/problemset/problem/1676/H1
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

 int test;
 cin>>test;
 while (test--)
 {
    int n;
    cin>>n;
    vector<ll>arr(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }


    pbds<ll>pb;
    ll ans = 0;


    for (int i = 1; i <=n; i++)
    {
        if(i==1){
            pb.insert(arr[i]);
        }
        else{
            ll val = arr[i];
            ll order = pb.order_of_key(val);
            ans+=(pb.size() - order);
            pb.insert(val);
        }
    }
    

    cout<<ans<<"\n";
    
    
 }
  

   

return 0;

}


/*



4
7
4 1 4 6 7 7 5
2
2 1
1
1
3
2 2 2




*/