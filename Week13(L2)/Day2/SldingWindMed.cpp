//https://cses.fi/problemset/task/1076
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

   ll n,k;
   cin>>n>>k;
   vector<ll>arr(n);
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }

   int start = 0;
   int end = 0;
   pbds<pair<ll,int>>pb;

   while (end<n)
   {

    // cout<<start<<" "<<end<<"\n";
      if(end-start+1>k){
         
        if(k%2==0){
          auto x = pb.find_by_order(k/2);
          auto y = pb.find_by_order((k/2)-1);
          cout<<min(x->first, y->first)<<" ";
        }
        else{

            auto ans = pb.find_by_order(k/2);
            cout<<ans->first<<" ";
          
        }

          pb.erase({arr[start],start});
          pb.insert({arr[end],end});
          start++;
      }
      else{
         pb.insert({arr[end],end});
      }
      end++;
   }



   if(k%2==0){
    auto x = pb.find_by_order(k/2);
    auto y = pb.find_by_order((k/2)-1);
    cout<<min(x->first, y->first)<<" ";
  }
  else{

      auto ans = pb.find_by_order(k/2);
      cout<<ans->first<<" ";
    
  }
   
   

return 0;

}


/*

8 3
2 4 3 5 8 1 2 1

*/