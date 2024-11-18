//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n,m;
   cin>>n>>m;
   int arr[n], drr[m];

   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }

   for (int i = 0; i <m; i++)
   {
       cin>>drr[i];
   }


   int longarr[m+n];

   int i = 0;
   int j = 0;
   int ind = 0;
  
   //m = drr.len n = arr.len 
   
   while (i<n && j<m)
   {
       if(arr[i]<drr[j]){
        longarr[ind] = arr[i];
        i++;
        ind++;
       }
       else{
        longarr[ind] = drr[j];
        j++;
        ind++;
       }
   }



    while (i<n)
   {
      
        longarr[ind] = arr[i];
        i++;
        ind++;
     
     
   }





    while (j<m)
   {
      
        longarr[ind] = drr[j];
        j++;
        ind++;
     
   }


   
   for (int i = 0; i <n+m; i++)
   {
       cout<<longarr[i]<<" ";
   }
   

   
   
   

return 0;

}

