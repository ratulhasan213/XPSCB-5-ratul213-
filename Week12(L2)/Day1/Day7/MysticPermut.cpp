//https://codeforces.com/problemset/problem/1689/B
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
       int n;
       cin>>n;
       vector<ll>arr(n+1);
       vector<ll>ans(n+1);
       for (int i = 1; i <=n; i++)
       {
          cin>>arr[i];
          ans[i] = i;
       }
        

       bool flag = true;

       for (int i = 1; i <=n; i++)
       {
           if(arr[i] == ans[i]){
               if(i+1<=n){
                  //right swap possible:
                  int x = ans[i];
                  ans[i] = ans[i+1];
                  ans[i+1] = x;
               }
               else if(i-1>=1) {
                  //left swap possible:
                  int x = ans[i];
                  ans[i] = ans[i-1];
                  ans[i-1] = x;
               }
               else{
                flag = false;
                break;
               }
           }
         
       }

       if(flag){
         for (int i = 1; i <=n; i++)
         {
            cout<<ans[i]<<" ";
         }
         cout<<"\n";
         
       }
       else{
        cout<<"-1\n";
       }
       
      
       
   }
   

return 0;

}



/*


1
8
2 1 3 4 5 7 6 8

4
3
1 2 3
5
2 3 4 5 1
4
2 3 1 4
1
1



*/