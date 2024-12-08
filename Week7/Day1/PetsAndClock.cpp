//https://codeforces.com/problemset/problem/1097/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   int arr[n];
   for (int i  = 0; i <n; i++)
   {
      cin>>arr[i];
   }

    int deg;

   for (int  mask = 0; mask<(1<<n); mask++)
   {
           deg = 0;
            for (int k = 0; k<n; k++)
            {
                if((mask>>k) & 1){
                      //clockwise:
                      deg+=arr[k];
                }else{
                    deg-=arr[k];
                }

            }

           if(deg%360==0){
                break;
            }
                       
   }

   if(deg%360==0){
    cout<<"YES\n";
   }
   else{
    cout<<"NO\n";
   }

  


return 0;

}

/*

3
10
20
30


3
10
10
10

3
120
120
120





*/