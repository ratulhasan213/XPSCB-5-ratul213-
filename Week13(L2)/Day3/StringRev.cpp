//https://codeforces.com/problemset/problem/1430/E
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
 string s;
 cin>>s;
 map<char,vector<int>>cnt;
 
 for (int i = 0; i <n; i++)
 {
   cnt[s[i]].push_back(i);
 }
 

 string r = s;
 reverse(r.begin(),r.end());

 vector<int>arr;
 pbds<int>pb;


 for (int i = 0; i<n; i++)
 {
    char ch = r[i];
    arr.push_back(cnt[ch].front());
    pb.insert(arr.back());
    cnt[ch].erase(cnt[ch].begin());

 }


 ll ans = 0;
 for (int i = 0;i<n; i++)
 {
    int x = arr[i];
    pb.erase(x);
    ans+=pb.order_of_key(x);
 }
 
 cout<<ans<<"\n";
 

//    for(auto[key,v]: cnt){
//      cout<<key<<": ";
//      for(int x: v){
//         cout<<x<<" ";
//      }
//      cout<<"\n";
//    }




return 0;

}