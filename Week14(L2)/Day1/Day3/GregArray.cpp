//https://codeforces.com/problemset/problem/295/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   ll n,m,k;
   cin>>n>>m>>k;
   vector<ll>arr(n+1);
   for (int i = 1; i <=n; i++)
   {
      cin>>arr[i];
   }

  
   ll left,right,d;
   vector<tuple<ll, ll, ll>> vp(m + 1, make_tuple(-1, -1, -1));
   for (int i = 1; i<=m; i++)
   {
      cin>>left>>right>>d;
      tuple tp = make_tuple(left,right,d);
      vp[i] = tp;
     
   }

   vector<ll>sum(m+1,0);
   for (int i = 0; i <k; i++)
   {
      cin>>left>>right;
      sum[left]+=1;
      if(right+1<=m){
        sum[right+1]-=1; 
      }
       
   }

   for (int i = 2; i <=m; i++)
   {
      sum[i] = sum[i]+sum[i-1];
   }


//    for (int i = 1; i <=n; i++)
//    {
//       cout<<sum[i]<<" ";
//    }
//    cout<<"\n";
   
   
   vector<ll>diff(n+1,0);
   for (int i = 1; i <=m; i++)
   {
      auto tp = vp[i];
      left = get<0>(tp);
      right = get<1>(tp);
      d = get<2>(tp);

    //   cout<<left<<" "<<right<<" "<<d<<"\n";

      diff[left]+=(d*sum[i]);
      if(right+1<=n){
        diff[right+1]-=(d*sum[i]);
      }
   }

   for (int i = 2; i <=n; i++)
   {
      diff[i] = diff[i] + diff[i-1];
   }
   


   for (int i = 1; i <=n; i++)
   {
      cout<<arr[i]+diff[i]<<" ";
   }

   cout<<"\n";
   
 
   
   

return 0;

}


/*


4 3 6
1 2 3 4
1 2 1
2 3 2
3 4 4
1 2
1 3
2 3
1 2
1 3
2 3




3 3 3
1 2 3
1 2 1
1 3 2
2 3 4
1 2
1 3
2 3


1 1 1
1
1 1 1
1 1




*/