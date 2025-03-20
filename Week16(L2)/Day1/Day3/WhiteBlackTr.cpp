//https://codeforces.com/problemset/problem/1676/G
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int ans;
bool visited[5000];
map<int,char>cnt;
map<int,pair<int,int>>color;




void dfs(vector<vector<int>>& mat, int node){
    visited[node] = true;

    if(cnt[node] == 'W'){
        color[node].first++;
    }
    else{
        color[node].second++;
    }
     
    for(auto child: mat[node]){
        if(!visited[child]){
           dfs(mat,child);
           color[node].first+=color[child].first;
           color[node].second+=color[child].second;
        }
    }

    if(color[node].first == color[node].second){
        ans++;
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
       string s;
       cin>>n;
       int val;
       vector<vector<int>>mat(n+1);
       for (int i = 2; i <=n; i++)
       {
          cin>>val;
          mat[val].push_back(i);
       }

       cin>>s;
       cnt.clear();
      
       for (int i = 0; i <n; i++)
       {
          cnt[i+1] = s[i];
       }

  
       ans = 0;
       memset(visited,false,sizeof(visited));
       color.clear();
       
       dfs(mat,1);

       cout<<ans<<"\n";
       



    //    for (int i = 1; i <=n; i++)
    //    {
    //       cout<<i<<" -> ";
    //       auto arr = mat[i];
    //       for(auto x: arr){
    //         cout<<x<<" ";
    //       }
    //       cout<<"\n";
    //    }




   
    
       
       

   }
   
   
   

return 0;

}


/*


1
7
1 1 2 3 3 5
WBBWWBW


1
8
1 2 3 4 5 6 7
BWBWBWBW





3
7
1 1 2 3 3 5
WBBWWBW
2
1
BW
8
1 2 3 4 5 6 7
BWBWBWBW



*/