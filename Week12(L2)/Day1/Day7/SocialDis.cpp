//https://codeforces.com/problemset/problem/1668/B
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
       int n,m;
       cin>>n>>m;
       vector<ll>arr(n);
       for (int i = 0; i <n; i++)
       {
          cin>>arr[i];
       }

       if(n>=m){
        cout<<"NO\n";
       }
       else{
          sort(arr.begin(),arr.end(),greater<ll>());

          int last = m-arr[0];

   
          int in = 0;
 
          int dis = arr[in]+1;
          in++;
          bool ans = true;

         
          while (in<n)
          {
         
             if(dis<last){
        
                dis+=(arr[in]+1);
             }
             else{
        
                 ans = false;
                break;
             }

             in++;

          }

          if(ans){
            cout<<"YES\n";
          }
          else{
            cout<<"NO\n";
          }
          
          
       }
       
   }
   

return 0;

}



/*

1
3 2
1 1 1


1
2 4
1 1

1
2 5
2 1

6
3 2
1 1 1
2 4
1 1
2 5
2 1
3 8
1 2 1
4 12
1 2 1 3
4 19
1 2 1 3



*/