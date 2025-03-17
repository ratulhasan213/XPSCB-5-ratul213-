#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check(int n, int r, int c,vector<vector<bool>>& board){
  
    //up:
    for (int i = r-1; i>=0; i--)
    {
        if(board[i][c]){
            return false;
        }
    }

    //down:
    for (int i = r+1; i<n; i++)
    {
        if(board[i][c]){
            return false;
        }
    }


    //right:

    for (int i = c+1; i <n; i++)
    {
        if(board[r][i]){
            return false;
        }
    }

    //left:

    for (int i = c-1; i>=0; i--)
    {
        if(board[r][i]){
            return false;
        }
    }


    //left-up:

    for (int i = r-1, j = c-1; i>=0 && j>=0; i--,j--)
    {
        if(board[i][j]){
            return false;
        }
    }


    //right-up:
    for (int i = r-1, j = c+1; i>=0 && j<n; i--,j++)
    {
        if(board[i][j]){
            return false;
        }
    }


    //left-down:
    for (int i = r+1, j = c-1; i <n && j>=0 ; i++,j--)
    {
        if(board[i][j]){
            return false;
        }
    }

    //right-down:

    for (int i = r+1, j= c+1; i <n && j<n; i++, j++)
    {
        if(board[i][j]){
            return false;
        }
    }
    

    return true;
    
}


void queens(int n, int row,vector<pair<int,int>>& temp, vector<vector<pair<int,int>>>& ans, vector<vector<bool>>& board){

    if(row == n){
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i <n; i++)
    {
        if(check(n,row,i,board)){
            temp.push_back({row,i});
            board[row][i] = true;
            queens(n,row+1,temp,ans,board);

            temp.pop_back();
            board[row][i] = false;
        }
    }
    
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n = 4;
   vector<pair<int,int>>temp;
   vector<vector<pair<int,int>>>ans;
   vector<vector<bool>> board(n,vector<bool>(n, false));


   queens(n,0,temp,ans,board);

   vector<vector<string>> Q;
   vector<string>qn;
   string t;
   for (int i = 0; i <n; i++)
   {
     t.push_back('.');
   }
   
   


   for(auto arr: ans){
    for(auto p: arr){
      string s = t;
      s[p.second] = 'Q';
      qn.push_back(s);
    }
    Q.push_back(qn);
    qn.clear();
   
   }


   for(auto arr: Q){
     for(auto x: arr){
        cout<<x<<"\n";
     }
     cout<<"\n\n\n";
   }


return 0;

}



/*


bool isValid(int n, int r, int c){
    return r<n && r>=0 && c<n && c>=0;
}



*/