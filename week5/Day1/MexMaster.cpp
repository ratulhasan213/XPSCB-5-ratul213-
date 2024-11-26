//https://codeforces.com/problemset/problem/1806/B
#include<bits/stdc++.h>
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
       int arr[n];
       int zero = 0;
       int noneZero = 0;
       int mx = -1;
       for (int i = 0; i <n; i++)
       {
            cin>>arr[i];
            if(arr[i]==0){
                zero++;
            }
            else{
                noneZero++;
            }

            mx = max(mx,arr[i]);
       }

       if(zero==0 || zero-1<=noneZero){
          cout<<"0\n";
       }
       else{
          if(mx==1){
             cout<<"2\n";
          }
          else{
            cout<<"1\n";
          }
       }
       
   }
   

return 0;

}

/*


3
2
0 0
3
0 0 1
8
1 0 0 0 2 0 3 0


*/