//https://codeforces.com/problemset/problem/1593/C
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
      ll n,k;
      cin>>n>>k;
      ll arr[k];
      for (int i = 0; i<k; i++)
      {
        cin>>arr[i];
      }

      sort(arr,arr+k,greater<ll>());

     ll start = 1;
     ll end = n;
     ll ans = 0;

  

     auto canSave = [&] (ll mid){
        
        ll mice = 0;
        ll time = 0;
        for(int i = 0;i<k;i++){

             ll pos = arr[i];
             ll dif = n-pos;

             if(time+dif<n){
                mice++;
                if(mice == mid){
                   return true;
                }
                time+=dif;
             }
             else{
               break;
             }
             
             
           

        }

        return false;
     };


     while (start<=end)
     {
        ll mid = start+(end-start)/2;
        if(canSave(mid)){
           ans = mid;
           start = mid+1;
        }
        else{
          end = mid-1;
        }

     }


     cout<<ans<<"\n";
     
      
   }
   

return 0;

}


/*

1
2 8
1 1 1 1 1 1 1 1

1
10 6
8 7 5 4 9 4



1
12 11
1 2 3 4 5 6 7 8 9 10 11


3
10 6
8 7 5 4 9 4
2 8
1 1 1 1 1 1 1 1
12 11
1 2 3 4 5 6 7 8 9 10 11



*/





/*

// this is overThinking 
// although it got accepted


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
      int n,k;
      cin>>n>>k;
      ll val;
      map<ll,int>cnt;
      for (int i = 0; i<k; i++)
      {
        cin>>val;
        cnt[val]++;
      }

     ll start = 1;
     ll end = n;
     ll ans = 0;

  

     auto canSave = [&] (ll mid){
        
        ll time = n-1;
        ll mice = 0;
        for(auto it = cnt.rbegin(); it!=cnt.rend(); ++it){
             ll key = it->first;
             int occ = it->second;  

             ll dif = n-key;

             if(time/dif>=occ){
                 mice+=occ;
                 time-=dif*occ;
             }
             else{
                 mice+=(time/dif);
                break;
             } 

        }

        return mice>=mid;
     };


     while (start<=end)
     {
        ll mid = start+(end-start)/2;
        if(canSave(mid)){
           ans = mid;
           start = mid+1;
        }
        else{
          end = mid-1;
        }

     }


     cout<<ans<<"\n";
     
      
   }
   

return 0;

}



*/