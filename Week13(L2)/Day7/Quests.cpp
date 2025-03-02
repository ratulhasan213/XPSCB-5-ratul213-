//https://codeforces.com/problemset/problem/1760/F
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool canMake(vector<ll>& arr, ll c, ll d, ll k){
    // cout<<k<<"\n";
    if(k==0){
        return arr[0]*d >=c;
    }

    int n = arr.size();
 
    if(k<=n){
        ll sum = 0;
         int in = 0; 
        for (int i = 0; i<d; i++)
        {
            sum+=arr[in];
            in++;
            if(in == k){
               in = 0;
            }
        }

        // cout<<sum<<"\n";
        
        return sum>=c;
        
    }
    
        // k>n:

        int ik = 0,in=0;
        ll sum = 0;
        for (int i = 0; i <d; i++)
        {
            if(ik<n){
              sum+=arr[in];
              in++;
            }
           
     
            ik++;
            if(ik == k){
                ik = 0;
            }

            if(in == n){
                in = 0;
            }
           
        }
        
        
        
     return sum>=c;
    

    
}


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      ll n,c,d;
      cin>>n>>c>>d;
      vector<ll>arr(n);
      ll s = 0;
      for (int i = 0; i<n; i++)
      {
        cin>>arr[i];
      }
      
      sort(arr.begin(),arr.end(),greater<ll>());

      for (ll i = 0; i < min(d,n); i++)
      {
        s+=arr[i];
      }
      

      if(s>=c){
         cout<<"Infinity\n";
      }
      else if(arr[0]*d < c){
        cout<<"Impossible\n";
      }
      else{
         
        int start = 0;
        int end = d;
        ll ans = -1;
        while (start<=end)
        {
            ll mid = (end-start)/2+start;
            if(canMake(arr,c,d,mid)){
               ans = max(ans,mid);
               start = mid+1;
            }
            else{
                end = mid-1;
            }
        }

        cout<<ans-1<<"\n";
        
      }

   }
   

return 0;

}




/*

1
4 20 3
4 5 6 7

7 6 5 4




1
5 9 8
5 3 1 1 2


6
2 5 4
1 2
2 20 10
100 10
3 100 3
7 2 6
4 20 3
4 5 6 7
4 100000000000 2022
8217734 927368 26389746 627896974
2 20 4
5 1



*/