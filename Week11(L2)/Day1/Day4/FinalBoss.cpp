//https://codeforces.com/problemset/problem/1985/F
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
     ll h,n;
     cin>>h>>n;
     ll pow[n];
     ll col[n];
     for (int i = 0; i <n; i++)
     {
        cin>>pow[i];
     }

     for (int i = 0; i <n; i++)
     {
        cin>>col[i];
     }
     

     ll start = 1;
     ll end = 1e12;

     ll ans = 1e12;
      

      auto canBeat = [&] (ll mid){

        ll totalPowGen = 0;
        for (int i = 0; i <n; i++)
        {
           ll t =  pow[i]*(1+((mid-1)/col[i]));
           totalPowGen+=t;
           if(totalPowGen>=h){
            return true;
           }
        }
        
       return false;
   
      };


   

     while (start<=end)
     {
         ll mid = start+(end-start)/2;
   

         if(canBeat(mid)){
            ans = min(ans,mid);
            end = mid-1;
         }
         else{
            start = mid+1;
         }
     }


     cout<<ans<<"\n";
     
   }
   

return 0;

}




/*

1
90000 2
200000 200000
1 1

1
1 1
100000 1
1


8
3 2
2 1
2 1
5 2
2 1
2 1
50 3
5 6 7
5 6 7
50 3
2 2 2
3 3 3
90000 2
200000 200000
1 1
100000 1
1
200000
6 7
3 2 3 2 3 1 2
6 5 9 5 10 7 7
21 6
1 1 1 1 1 1
5 5 8 10 7 6




*/