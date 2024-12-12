//https://codeforces.com/contest/1981/problem/B
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
    ll n,m;
    cin>>n>>m;
  
   ll left = max(0LL,n-m);
   ll right = n+m;

   ll ans = 0;

   int len = __lg(right);

   for (int i = len; i>=0 ; i--)
   {
       int leftBit = (1<<i) & left;
       if(leftBit){
         leftBit = 1;
       }
       else{
        leftBit = 0;
       }
       int rightBit = (1<<i) & right;

       if(rightBit){
        rightBit = 1;
       }
       else{
        rightBit = 0;
       }

       if(leftBit == rightBit){
           
           if(leftBit ==  1){
              ans+=(1<<i);
           }
            
       }
       else{
           
           ll temp = (1<<i);
           temp = temp + (1<<i)-1;
           ans+=temp;
           break;
           
       }


   }
   

   

   cout<<ans<<"\n";



  }
   

return 0;

}


/*

9
0 0
0 1
0 2
1 0
5 2
10 1
20 3
1145 14
19198 10



*/