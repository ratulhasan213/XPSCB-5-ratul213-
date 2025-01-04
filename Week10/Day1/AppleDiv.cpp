//https://cses.fi/problemset/task/1623/
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int n;



ll getMinDiff(ll arr[], ll sum1, ll sum2, int indx){
    if(indx == n){
        return abs(sum1 - sum2);
    }

   ll takeSum1 = getMinDiff(arr,sum1+arr[indx],sum2,indx+1);
    ll takeSum2 = getMinDiff(arr,sum1,sum2+arr[indx],indx+1);

    return min(takeSum1,takeSum2);

}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


//    int arr[] = {3,2,7,4,1};
//     n = 5;

    cin>>n;
    ll arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    
   cout<<getMinDiff(arr,0,0,0)<<"\n";


return 0;

}