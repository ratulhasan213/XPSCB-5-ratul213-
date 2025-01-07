//https://cses.fi/problemset/task/1662
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll countSubArray(int arr[], int n){
    ll ans = 0;
    
    ll pref[n];
    pref[0] = arr[0];
    for (int i = 1; i <n; i++)
    {
        pref[i] = pref[i-1]+arr[i];
    }

    map<int,ll>cnt;
    cnt[0] = 1;

    for (int i = 0; i <n; i++)
    {
        pref[i] = pref[i]%n;
        if(pref[i]<0){
            pref[i] = n + pref[i];
        }

        if(cnt.count(pref[i])){
            ans+=cnt[pref[i]];
        }

        cnt[pref[i]]++;
    }
    
    
    

    return ans;
}


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 
  
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i <n; i++)
  {
    cin>>arr[i];
  }

  cout<<countSubArray(arr,n)<<"\n";
  

   

return 0;

}


/*

4
5 -65 -67 -67

*/