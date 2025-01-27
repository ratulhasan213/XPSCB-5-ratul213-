//https://codeforces.com/problemset/problem/1840/D
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool canMake(ll arr[], ll mid, int n){

    int cnt = 1;
    ll val = abs(arr[0] - mid);
    
    for (int i = 1; i <n; i++)
    {
         if(mid<abs(arr[i] - val)){
            cnt++;
            val = abs(arr[i]-mid);
         }

         if(cnt>3){
            return false;
         }
    }


    return true;
    


}


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

 int test;
 cin>>test;
 while (test--)
 {
    int n;
    cin>>n;
    ll arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }


    sort(arr,arr+n,greater<ll>());


    ll start = 0;
    ll end = 1e18;
    ll ans = 1e9;

    while (start<=end)
    {
        ll mid = start+(end-start)/2;

        if(canMake(arr,mid,n)){
            if(ans>mid){
                  ans = mid;
            }
            end = mid-1;
        }
        else{
            start = mid+1;
        }

    }

    cout<<ans<<"\n";
    

    
 }
 
   

return 0;

}


/*




5
6
1 7 7 9 9 9
6
5 4 2 1 30 60
9
14 19 37 59 1 4 4 98 73
1
2
6
3 10 1 17 15 11



*/