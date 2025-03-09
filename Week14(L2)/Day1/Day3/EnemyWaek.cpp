//https://codeforces.com/problemset/problem/61/E
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

   
   int n;
   cin>>n;
   vector<ll>arr(n);
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }
   
   pbds<ll>left,right;
   left.insert(arr[0]);
   for (int i = 1; i <n; i++)
   {
      right.insert(arr[i]);
   }


   ll ans = 0;
   
   for (int i = 1; i <n-1; i++)
   {   
       
       ll val = arr[i];
    //    cout<<"val: "<<val<<" -> : ";
       right.erase(val);
       ll r = right.order_of_key(val);
       ll l = left.size() - left.order_of_key(val);
       left.insert(val);

       ans+=(l*r);

    //    cout<<"left: "<<l<<" right: "<<r<<"\n";

   }

   cout<<ans<<"\n";
   



return 0;

}

/*


4
10 8 3 1


3
3 2 1


3
2 3 1



4
1 5 4 3



*/