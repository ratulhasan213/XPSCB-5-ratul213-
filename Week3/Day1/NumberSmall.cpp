//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n,m;
   cin>>n>>m;
   int A[n],B[m];

   for (int  i = 0; i <n; i++)
   {
       cin>>A[i];
   }

   for (int  i = 0; i <m; i++)
   {
       cin>>B[i];
   }
   

   int x = 0, y = 0;
   vector<int>ans;
   int count = 0;
   while (x<n && y<m)
   {
        if(B[y]>A[x]){
            count++;
            x++;
        }
        else{
            y++;
            ans.push_back(count);

        }
   }

   for(int val:ans){
    cout<<val<<" ";
   }

   while (y<m)
   {
      cout<<count<<" ";
      y++;
   }
   
   

return 0;

}

