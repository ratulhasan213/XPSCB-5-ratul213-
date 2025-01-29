//https://codeforces.com/problemset/problem/1873/E
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
       int n,x;
       cin>>n>>x;
       ll arr[n];
       for (int i = 0; i <n; i++)
       {
          cin>>arr[i];
       }

       ll start = 0;
       ll end = 1e10;
       ll ans = 0;

       auto canMake = [&](ll mid){
            
        ll dif = 0;
        for (int i = 0; i <n; i++)
        {
            if(mid - arr[i] >0){
                dif+= mid-arr[i];
            }
        }
        
          return dif<=x;
          
       };

       while (start<=end)
       {
          ll mid = start+(end-start)/2;

          if(canMake(mid)){
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
19 258986111
350756 753862 884405 47592 479662 116199 844044 798211 404635 338728 671433 652263 473269 118569 885260 81376 491607 229822 613005

14116884 (ans)

5
7 9
3 1 2 4 6 2 5
3 10
1 1 1
4 1
1 4 3 4
6 1984
2 6 5 9 1 8
1 1000000000
1


*/