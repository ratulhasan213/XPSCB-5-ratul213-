//https://codeforces.com/problemset/problem/2055/C
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
      int n,m; // n = row, m = col
      cin>>n>>m;
      string path;
      cin>>path;

      vector<vector<ll>> arr(n, vector<ll>(m));

      for (int i = 0; i <n; i++)
      {
        for (int j = 0; j <m; j++)
        {
            cin>>arr[i][j];
        }
        
      }

      int ai=0,aj=0,si=0;

      while (ai<n && aj<m)
      {
        
          char p = path[si];
         //  cout<<"ai aj p:\n";
         //  cout<<ai<<" "<<aj<<" "<<p<<"\n";
          
          if(p == 'R'){
           ll colSum = 0;
         //   cout<<"num: ";
           for (int i = 0; i<n; i++)
           {
            //  cout<<arr[i][aj]<<" ";
             colSum+=arr[i][aj];
           }
         //   cout<<"\ncolSum: ";
         //   cout<<colSum<<"\n";
           arr[ai][aj] = -colSum;
           aj+=1;
           
          }
          else{
             ll rowSum = 0;
            //  cout<<"num: ";
             for (int i = 0;i<m; i++)
             {
                rowSum+=arr[ai][i];
               //  cout<<arr[ai][i]<<" ";
             }
            //  cout<<"\nrowSum: ";
            //  cout<<rowSum<<"\n";
             arr[ai][aj] = -rowSum;
             ai+=1;
             
          }
          si++;
      }

   //   cout<<"u:\n\n\n\n";
      for (int i = 0; i <n; i++)
      {
         for (int j = 0; j <m; j++)
         {
            cout<<arr[i][j]<<" ";
         }
         cout<<"\n";
         
      }

      cout<<"\n";
      
      
      
   }
   

return 0;

}




/*


1
4 5
DRRRRDD
0 1 0 2 3
0 0 0 0 0
-1 0 -3 -3 0
0 0 0 -1 0


4
3 3
DRRD
0 2 3
0 0 0
3 1 0
4 5
DRRRRDD
0 1 0 2 3
0 0 0 0 0
-1 0 -3 -3 0
0 0 0 -1 0
2 3
RRD
0 0 0
0 1 0
5 5
DDDDRRRR
0 25 2 9 11
0 6 13 20 22
0 17 24 1 8
0 3 10 12 19
0 0 0 0 0

*/