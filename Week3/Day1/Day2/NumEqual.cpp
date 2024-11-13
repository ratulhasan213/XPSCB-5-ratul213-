//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n,m;
   cin>>n>>m;

   ll A[n],B[m];
   for (int i = 0; i <n; i++)
   {
       cin>>A[i];
   }


   for (int i = 0; i <m; i++)
   {
       cin>>B[i];
   }


   int x = 0, y = 0;
   ll ans = 0;

   while (x<n && y<m)
   {
       if(A[x] == B[y]){
        ll count1 = 0, count2 = 0;

        ll cA = A[x];  
        while (x<n && A[x]==cA)
        {
            x++;
            count1++;
        }

        ll cB = B[y];
        while (y<m && B[y]==cB)
        {
            y++;
            count2++;
        }

        ans+=(count1*count2);
        
        
       }
       else if(A[x]<B[y]){
         x++;
       }
       else{
        y++;
       }
   }

   cout<<ans<<"\n";
   
   
   

return 0;

}


/*

8 7
1 1 3 3 3 5 8 8
1 3 3 4 5 5 5

5 7
2 3 3 5 8
1 2 2 5 5 5 5


*/