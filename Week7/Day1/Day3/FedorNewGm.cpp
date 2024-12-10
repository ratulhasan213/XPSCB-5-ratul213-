//https://codeforces.com/problemset/problem/467/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n,m,k;
   cin>>n>>m>>k;

   int arr[m+1];
   
   int mx = -1;
   for (int i = 0; i <m+1; i++)
   {
       cin>>arr[i];
       mx = max(arr[i],mx);
   }
   

   int maxlen = __lg(mx);

   int fedor = *(arr+m);
   
   int diff;
   int ans = 0;
   for (int i = 0; i <m; i++)
   {
    //   cout<<arr[i]<<"->: ";
        diff = 0;
       for (int k = maxlen; k>=0; k--)
       {
            if((arr[i]>>k) & 1){
                if(!(fedor>>k & 1)){
                    diff++;
                }
            }
            else{
                // cout<<"0 ";
                 if(fedor>>k & 1){
                    diff++;
                }
            }
       }

    //    cout<<"\n";

     if(diff<=k){
            ans++;
     }
       
   }



   cout<<ans<<"\n";
   

return 0;

}


/*

3 3 3
1
2
3
4



*/