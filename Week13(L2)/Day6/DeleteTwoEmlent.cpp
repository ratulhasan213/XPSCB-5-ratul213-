//https://codeforces.com/problemset/problem/1598/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n;
      cin>>n;
      ll sum = 0;
      vector<ll>arr(n);

      
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
        sum+=arr[i];
      }

      if((2*sum)%n == 0){
        map<ll,ll>cnt;
        ll ans = 0;
        ll need = (2*sum)/n;
        // cout<<sum<<" "<<need<<"\n";
        for (int i = 0; i <n; i++)
        {
          ll t = need - arr[i];
          // cout<<t<<"\n";
          ans+=cnt[t];
          cnt[arr[i]]++;
        }
        cout<<ans<<"\n";
        
      }
      else{
        cout<<"0\n";
      }
      
     
   }
   

return 0;

}



/*

1
4
0 1 6 7

4
4
8 8 8 8
3
50 20 10
5
1 4 7 3 5
7
1 2 3 4 5 6 7



*/