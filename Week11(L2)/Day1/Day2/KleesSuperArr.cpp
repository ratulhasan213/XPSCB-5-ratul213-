//https://codeforces.com/problemset/problem/2009/E
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
     int n,s;
     cin>>n>>s;
      
    ll left = s;
    ll  right = s+n-1; 

    ll start = left;
    ll end = right;

    ll ans = 1e18;


    while (start<=end)
    {

        // cout<<"start: "<<start<<" end: "<<end<<"\n";
        ll mid = start+(end-start)/2;

        ll leftSum = (mid*(mid+1)/2);
        leftSum-=((left-1)*(left))/2;
        // cout<<"mid: "<<mid<<"\n";
        // cout<<"ls: "<<leftSum<<"\n";

        ll rightSum = ((right)*(right+1)/2);
        rightSum-=((mid)*(mid+1))/2;
        // cout<<"rs: "<<rightSum<<"\n";

        ll dif = abs(rightSum - leftSum); 
        // cout<<"dif: "<<dif<<"\n";

        ans = min(ans,dif);

        if(leftSum<rightSum){
            start = mid+1;
        }
        else{
            end = mid-1;
        }


        // cout<<"\n\n\n";
    }

    cout<<ans<<"\n";
     
     

   }
   

return 0;

}




/*

1
7 2


1
2 2

1
5 3


1
1000000000 1000000000

4
2 2
7 2
5 3
1000000000 1000000000



*/

