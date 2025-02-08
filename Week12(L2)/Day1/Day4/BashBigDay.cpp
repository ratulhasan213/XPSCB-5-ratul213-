//https://codeforces.com/problemset/problem/757/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   ll n;
   cin>>n;
   ll val;
   vector<ll>arr;
   map<ll,int>cnt;
   for (int i = 0; i<n; i++)
   {
      cin>>val;
      arr.push_back(val);
      for (int j = 2; j*j<=val; j++)
      {
         if(val%j==0){
            cnt[j]++;

          while (val%j==0)
          {
             val/=j;
          }

         }
          
      }

      if(val!=1){
        cnt[val]++;
      }
      

   }

   ll div = 1;
   int occurance = 0;

   for(auto[key,occ]: cnt){

    //  cout<<key<<" -> "<<occ<<"\n";
      if(occ>occurance){
         occurance = occ;
         div = key;
      }
   }


   int ans = 0;

   for(ll x: arr){
      if(x>=div && x%div == 0 ){
        ans++;
      }
   }

//    cout<<div<<"\n";
   
   if(div == 1){
     //all elements one:
     ans = 1;
   }

   cout<<ans<<"\n";
   

return 0;

}


/*

10
1 1 1 1 1 1 1 1 1 1

3
2 3 4

7
9 4 2 3 3 9 8


5
2 3 4 6 7




*/