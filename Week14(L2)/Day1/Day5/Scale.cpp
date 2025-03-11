//https://codeforces.com/problemset/problem/1996/B
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
      int n,k;
      cin>>n>>k;
      vector<vector<int>> arr(n, vector<int>(n));

      for (int i = 0; i < n; i++) {
        string row; // take string
        cin >> row;  
        for (int j = 0; j < n; j++) {
            arr[i][j] = row[j] - '0'; // then convert  
        }
    }


    //   for (int i = 0; i <n; i++)
    //   {
    //     for (int j = 0; j <n; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
        
    //   }
 
      int len = n/k;
      int ans[len][len];
      int r = 0, c = 0;
      for (int i = 0; i <len; i++)
      {
        for (int j = 0; j < len; j++)
        {
            ans[i][j] = arr[r][c];
            c+=k;
            if(c == n){
               c = 0;
               r+=k;
            } 
        }
        
      }


     for (int i = 0; i <len; i++)
     {
        for (int j = 0; j <len; j++)
        {
            cout<<ans[i][j];
        }

        cout<<"\n";
     }
     

      
      

   }
   


return 0;

}


/*



1
4 4
0000
0000
0000
0000



4
4 4
0000
0000
0000
0000
6 3
000111
000111
000111
111000
111000
111000
6 2
001100
001100
111111
111111
110000
110000
8 1
11111111
11111111
11111111
11111111
11111111
11111111
11111111
11111111



*/