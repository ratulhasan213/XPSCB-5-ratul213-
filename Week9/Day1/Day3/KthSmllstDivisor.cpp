//https://codeforces.com/problemset/problem/762/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

ll n,k;
cin>>n>>k;
vector<ll>ans;
for (ll i = 1; i*i<=n; i++)
{
    if(n%i==0){
        ans.push_back(i);
        if(i!=n/i){
          ans.push_back(n/i);
       }
    }

    
}

if(k>ans.size()){
    cout<<"-1\n";
}
else{
    sort(ans.begin(),ans.end());
    cout<<ans[k-1]<<" ";
    cout<<"\n";
}




// for(ll x:ans){
//     cout<<x<<" ";
// }

// cout<<"\n";

   

return 0;

}