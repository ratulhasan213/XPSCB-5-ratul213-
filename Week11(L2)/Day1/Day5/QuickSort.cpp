//https://codeforces.com/problemset/problem/1768/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n,k;
      cin>>n>>k;

      int arr[n];
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
      }


      int cnt = 0;
      int t = 1;

      for (int i = 0; i <n; i++)
      {
        if(arr[i] == t){
            t++;
            cnt++;
        }
      }

      int need = n-cnt;

      cout<<ceil((need*1.0)/k)<<"\n";
      
      

   }
   

return 0;

}



/*


4
3 2
1 2 3
3 1
3 1 2
4 2
1 3 2 4
4 2
2 3 1 4



*/