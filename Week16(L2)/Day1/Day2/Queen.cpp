//https://codeforces.com/problemset/problem/1143/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool visited[100005];
map<int,bool>res;
priority_queue<int, vector<int>, greater<int>> pq;



bool respectedByChild(vector<vector<int>>& mat, int node){
   
    for(auto child: mat[node]){
        if(res[child]){
            return true;
        }
    }

    return false;

}



void dfs(vector<vector<int>>& mat,int node){
    visited[node] = true;

    if(!res[node] && !respectedByChild(mat,node)){
       pq.push(node);
    }

    for(auto child: mat[node]){
        if(!visited[child]){
            dfs(mat,child);
        }
    }
}





int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n,p,u,c;
   cin>>n;

   vector<vector<int>>mat(n+1);
   int root = -1;

   for (int i = 1; i <=n; i++)
   {
      cin>>p>>c;
      if(p==-1){
        root = i;
        res[i] = true;
        continue;
      }
      mat[p].push_back(i);
      res[i] = !c;
   }


//    for (int i = 1; i <=n; i++)
//    {
//       cout<<i<<" ("<<res[i]<<") ->";
//       for(auto x: mat[i]){
//         cout<<x<<" ";
//       }
//       cout<<"\n";
//    }


  memset(visited,false,sizeof(visited));
  dfs(mat,root);

  if(pq.empty()){
    cout<<-1<<"\n";
  }
  else{
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\n";
    
  }
   
   

return 0;

}


/*



5
3 1
1 1
-1 0
2 1
3 0


5
-1 0
1 1
1 1
2 0
3 0




8
2 1
-1 0
1 0
1 1
1 1
4 0
5 1
7 0



*/