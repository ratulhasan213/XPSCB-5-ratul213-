//https://codeforces.com/problemset/problem/1676/D
#include<bits/stdc++.h>
using namespace std;
int n,m;

int getSum(vector<vector<int>>&arr, int br, int bc){
    int i = br-1,j = bc+1;
    
    int sum = 0;
    
    while (i>=0 && j<m)
    {
        sum+=arr[i][j];
        i--;
        j++;
    }


    i = br+1, j = bc-1;
      while (i<n && j>=0)
    {
        sum+=arr[i][j];
        i++;
        j--;
    }


     i = br-1, j = bc-1;
      while (i>=0 && j>=0)
    {
        sum+=arr[i][j];
        i--;
        j--;
    }

      i = br+1, j = bc+1;
      while (i<n && j<m)
    {
        sum+=arr[i][j];
        i++;
        j++;
    }
    
    sum+=arr[br][bc];

    return sum;


    
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
     
       cin>>n>>m;
        vector<vector<int>>arr(n,vector<int>(m));

       for (int i = 0; i <n; i++)
       {
          for (int j = 0; j <m; j++)
          {
              cin>>arr[i][j];
          }
          
       }

         int ans = -1;

           for (int i = 0; i <n; i++)
        {
          for (int j = 0; j <m; j++)
          {
            ans = max(ans , getSum(arr,i,j) );
          }
          
        }


        cout<<ans<<"\n";
       
       
   }
   

return 0;

}

