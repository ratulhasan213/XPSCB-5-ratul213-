//https://codeforces.com/problemset/problem/1955/D
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
      int n,m,k;
      cin>>n>>m>>k;
      vector<ll>arr(n);
      for (int i = 0; i <n; i++)
      {
         cin>>arr[i];
      }

      map<ll,ll>Bmap;
      ll val;

      for (int i = 0; i<m; i++)
      {
          cin>>val;
          Bmap[val]++;
      }
      
      map<ll,ll>comMap;
      map<ll,ll>unComMap;
      ll com = 0;
      ll ans = 0;


      int start = 0;
      int end = 0;
      while (end<m)
      {
          val = arr[end];
          if(Bmap.count(val)){
             if(!comMap.count(val) || comMap[val]<Bmap[val]){
               comMap[val]++;
               com++;
             }
             else{
               unComMap[val]++;
             }
          }
          else{
             unComMap[val]++;
          }

         end++;
      }


      if(com>=k){
         ans++;
      }



      while (end<n)
      {
         
        ll e = arr[start];
        val = arr[end];

        if(!unComMap.empty() && unComMap.count(e)){
           unComMap[e]--;
           if(unComMap[e] == 0){
             unComMap.erase(e);
           }
        }
        else{
           com--;
           comMap[e]--;
           if(comMap[e] == 0){
             comMap.erase(e);
           }
        }


        if(Bmap.count(val)){
         if(!comMap.count(val) || comMap[val]<Bmap[val]){
           comMap[val]++;
           com++;
         }
         else{
           unComMap[val]++;
         }
      }
      else{
         unComMap[val]++;
      }


        if(com>=k){
         ans++;
        }


         start++;
         end++;
      }
      
      
      cout<<ans<<"\n";



   }
   

return 0;

}



/*


1
7 4 2
4 1 2 3 4 5 6
1 2 3 4



1
7 4 3
4 1 2 3 4 5 6
1 2 3 4




1
7 4 4
4 1 2 3 4 5 6
1 2 3 4



1
11 5 3
9 9 2 2 10 9 7 6 3 6 3
6 9 7 8 10






5
7 4 2
4 1 2 3 4 5 6
1 2 3 4
7 4 3
4 1 2 3 4 5 6
1 2 3 4
7 4 4
4 1 2 3 4 5 6
1 2 3 4
11 5 3
9 9 2 2 10 9 7 6 3 6 3
6 9 7 8 10
4 1 1
4 1 5 6
6



  cout<<"ater insert: ";
        for(ll x: temp){
         cout<<x<<" ";
        }
        cout<<"\n";




*/