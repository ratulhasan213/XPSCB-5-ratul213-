//https://cses.fi/alon/task/1620
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

 ll n,t;
 cin>>n>>t;

 ll arr[n];
 for (int i = 0; i <n; i++)
 {
    cin>>arr[i];
 }


 ll start = 0;
 ll end = 1e18;
 ll ans = 1e18;


 while (start<=end)
 {
    ll mid = start+(end-start)/2;

    ll pro = 0;
    for (int i = 0; i <n; i++)
    {
        pro+= min(mid/arr[i],(ll)1e9);
         // pro+=mid/arr[i];
    }

    if(pro<t){
      start = mid+1;
    }
    else{
           
           if(mid<ans){
              ans = mid;
           }
            
           end = mid-1;
    }
    
 }


 cout<<ans<<"\n";
 
 
   

return 0;

}

/*

1 1000000000
1000000000

*/