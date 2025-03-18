//https://codeforces.com/problemset/problem/1829/F
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
       int n,m;
       cin>>n>>m;

       vector<int>mat[n+1];
       int u,v;

       for (int i = 0; i <m; i++)
       {
          cin>>u>>v;
          mat[u].push_back(v);
          mat[v].push_back(u);
       }

      int x=-1,y=-1;
    

    //    for (int i = 1; i <=n; i++)
    //    {
    //       cout<<i<<" -> ";
    //       for(auto x: mat[i]){
    //         cout<<x<<" ";
    //       } 

    //       cout<<"\n";
    //    }



    for (int i = 1; i <=n; i++)
    {   

        if(mat[i].size()==1){
            // i -> leaf node:
         
            int parent = mat[i].front();
            y = mat[parent].size()-1;

            for(auto v: mat[parent]){

                x = max(x,(int)mat[v].size());
            }

            break;

        }
       
      

      
    }

    // cout<<"\n\n";
    cout<<x<<" "<<y<<"\n";
       
       
   }
   

return 0;

}

