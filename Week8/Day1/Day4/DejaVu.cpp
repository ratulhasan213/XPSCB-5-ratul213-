//https://codeforces.com/problemset/problem/1891/B
#include<bits/stdc++.h>
using namespace std;

int check[50];
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n,q;
      cin>>n>>q;
      int arr[n];
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
      }
      
      int brr[q];
      for (int i = 0; i <q; i++)
      {
         
          cin>>brr[i];
      }


      memset(check,0,sizeof(check));

      for(int i = 0; i<q;i++){

         int x = brr[i];
         if(check[x]==0){
            int div = 1<<x;

            for (int j = 0; j <n; j++)
            {
               if(arr[j]%div==0){
                arr[j]+=(1<<(x-1));
              }
            }
            check[x] = 1;
         }
   
    
      }


      for (int i = 0; i <n; i++)
      {
        cout<<arr[i]<<" ";
      }

      cout<<"\n";
      
      
      
   }
   

return 0;

}


/*

1
7 3
7 8 12 36 48 6 3
10 4 2


4
5 3
1 2 3 4 4
2 3 4
7 3
7 8 12 36 48 6 3
10 4 2
5 4
2 2 2 2 2
1 1 1 1
5 5
1 2 4 8 16
5 2 3 4 1



*/