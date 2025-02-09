//https://codeforces.com/problemset/problem/1902/C
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
      vector<ll>arr(n);
      ll m = LLONG_MIN;
      multiset<ll>mlt;
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
        mlt.insert(arr[i]);
        m = max(m,arr[i]);
      }

      if(n==1){
         cout<<1<<"\n";
         continue;
      }

      vector<ll>gcdArr;

      for (int i = 0; i <n; i++)
      {
           if(arr[i] == m){
            gcdArr.push_back(0);
           }
           else{
              if(m<0){
                   ll dif = abs(arr[i] - m);
                   gcdArr.push_back(dif);
              }
              else{
                //m>=0
                if(arr[i]<0){
                   ll t =  arr[i]*-1;
                    ll dif = t+m;
                    gcdArr.push_back(dif);
                }
                else{
                   //arr[i]>=0
                   ll dif = abs(arr[i] - m);
                   gcdArr.push_back(dif);
                }
              }
           }
      }


      ll x = 0;


      for(ll v: gcdArr){
        x = __gcd(x,v);
      }

    //   cout<<x<<"\n";

     ll an = 0;
     ll c = 1;
     while (true)
     {
         ll temp = m-(x*c);
         if(!mlt.count(temp)){
            an = temp;
            break;
         }
         c++;
     }

    //  cout<<an<<"\n";

      if(an<0){
         if(m<0){
            gcdArr.push_back(abs(m-an));
         }
         else{
            an*=-1;
            gcdArr.push_back(an+m);
         }
      }
      else{

        gcdArr.push_back(abs(m-an));
         
      }


    //  for(ll val: arr){
    //     cout<<val<<" ";
    //  }

    ll ans = 0;
    for (int i = 0; i <=n; i++)
    {
        ll val = gcdArr[i]/x;

        ans+=val;

    }
    

     cout<<ans<<"\n";
     
     
      
   }
   

return 0;

}


/*

1
5
1 -19 17 -3 -15


1
3
1 2 3

1
1
10

3
3
1 2 3
5
1 -19 17 -3 -15
1
10



*/