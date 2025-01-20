//https://codeforces.com/problemset/problem/1920/B
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
       int n,k,x;
       cin>>n>>k>>x;
       int arr[n];
       for (int i = 0; i <n; i++)
       {
          cin>>arr[i];
       }

       sort(arr,arr+n);

       ll pref[n];
       pref[0] = arr[0];

       for (int i = 1; i <n; i++)
       {
          pref[i] = arr[i]+pref[i-1];
       }


       ll ans = LONG_MIN;

       for (int i = 0; i <=k; i++)
       { 
        //    cout<<i<<"->\n";   
            int Aremove = n-1-i;

            if(Aremove<0){
                ans = max(ans,0LL);
                continue;
            }

          
            ll AliceSum = pref[Aremove];

            // cout<<Aremove<<" "<<AliceSum<<"\n";

            int Bremove = Aremove-x;

            if(Bremove<0){
                
                ans = max(ans, -pref[Aremove]);
                continue;
            }

            ll BobeSum = pref[Bremove];

           ll temp =   BobeSum-(AliceSum-BobeSum);

            // cout<<Bremove<<" "<<BobeSum<<"\n";

            ans = max(ans,temp);
            // cout<<ans<<"\n";
            // break;
       }


       cout<<ans<<"\n";
    

       
       
   }
   

return 0;

}



/*

1
9 3 4
5 6 7 8 9 10 11 12 13


1
8 5 3
5 5 3 3 3 2 9 9


1
1 1 1
1



8
1 1 1
1
4 1 1
3 1 2 4
6 6 3
1 4 3 2 5 6
6 6 1
3 7 3 3 32 15
8 5 3
5 5 3 3 3 2 9 9
10 6 4
1 8 2 9 3 3 4 5 3 200
2 2 1
4 3
2 1 2
1 3



*/