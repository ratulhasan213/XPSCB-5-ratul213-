//https://codeforces.com/problemset/problem/276/c?mobile=false
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   ll n,q;
   cin>>n>>q;
   vector<ll>arr(n+1);
   vector<ll>prefSum(n+2,0);
   for (int i = 1; i <=n; i++)
   {
      cin>>arr[i];
   }


   ll left,right;
   for (int i = 0; i <q; i++)
   {
     cin>>left>>right;
     prefSum[left]++;
     prefSum[right+1]--;
   }


   ll sum = prefSum[0];
   for (int i = 1; i <n+2; i++)
   {
      prefSum[i] = prefSum[i]+sum;
      sum = prefSum[i];
   }

   sort(prefSum.begin()+1,prefSum.end()-1,greater<ll>());
   sort(arr.begin()+1,arr.end(),greater<ll>());

//    for(ll x: arr){
//     cout<<x<<" ";
//    }
//    cout<<"\n";

//    for(ll x: prefSum){
//     cout<<x<<" ";
//    }
//    cout<<"\n";

    sum = 0;
    for (int i = 1; i <=n; i++)
    {
       sum+=(arr[i]*prefSum[i]);
    }
    
   
   
  cout<<sum<<"\n";

   


return 0;

}


/*

3 3
5 3 2
1 2
2 3
1 3


5 3
5 2 4 1 3
1 5
2 3
2 3



*/