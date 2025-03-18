//https://codeforces.com/problemset/problem/1900/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int ans;
int visited[300006];
map<int,char>path;

void dfs(vector<vector<int>>& mat, int node, int cnt){
    
    visited[node] = true;
    int left = mat[node][0];
    int right = mat[node][1];

    if(right == 0 && left == 0){
        ans = min(ans,cnt);
        return;
    }

    if(left!=0 && !visited[left]){
        if(path[node] == 'L'){
          dfs(mat,left,cnt);
        }
        else{
          dfs(mat,left,cnt+1);
        }
    }


    if(right!=0 && !visited[right]){
        if(path[node] == 'R'){
            dfs(mat,right,cnt);
          }
          else{
            dfs(mat,right,cnt+1);
          }
    }


}


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

   int test;
   cin>>test;
   while (test--)
   {
   int n;
   cin>>n;
   string s;
   cin>>s;

   vector<vector<int>> mat(n+1);
   int left,right;
   for (int i = 1; i <=n; i++)
   {
      cin>>left>>right;
      mat[i].push_back(left);
      mat[i].push_back(right);
      
   }


   for (int i = 1; i<=n ; i++)
   {
      path[i] = s[i-1];
   }

    ans = INT_MAX;

    memset(visited,false,sizeof(visited));
 
    dfs(mat,1,0);
   
      cout<<ans<<"\n";



}
   


return 0;

}


/*

1
3
LRU
2 3
0 0
0 0

5
3
LRU
2 3
0 0
0 0
3
ULR
3 2
0 0
0 0
2
LU
0 2
0 0
4
RULR
3 0
0 0
0 4
2 0
7
LLRRRLU
5 2
3 6
0 0
7 0
4 0
0 0
0 0




//     cout<<"\n\n";

//    for (int i = 1; i <=n; i++)
//    {
//        cout<<i<<" -> ("<<path[i]<<") ";
//        for(auto x: mat[i]){
//         cout<<x<<" ";
//        }
//        cout<<"\n";
//    }


*/