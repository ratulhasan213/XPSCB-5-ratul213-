//https://codeforces.com/problemset/problem/1790/C
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
       int arr[n][n];

       for (int i = 0; i <n; i++)
       {
           for (int  j = 0; j <n-1; j++)
           {
               cin>>arr[i][j];
           }
           
       }

       map<int,int>cnt;

        for (int i = 0; i <n; i++)
       {
         
           cnt[arr[i][0]]++;
       }


       int c = -1;
       int num = 0;

       for(auto[key,val]: cnt){
         if(c<val){
            c = val;
            num = key;
         }


       }
     

       int row = -1;


        for (int i = 0; i <n; i++)
       {
         
          if(num!=arr[i][0]){
            row = i;
            break;
          }
       }
       
       cout<<num<<" ";
       for (int j = 0; j <n-1; j++)
       {
            cout<<arr[row][j]<<" ";
       }

       cout<<"\n";
       



   }
   

return 0;

}

