//https://codeforces.com/problemset/problem/1033/A
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


vector<pair<int,int>> dir = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1,},{-1,1},{1,-1}};

bool isValid(int row,int col, int n){
    return row>=0 && col>=0 && row<n && col<n;
}

void queenFillUp(vector<vector<bool>>& board, int row, int col){
    int len = board.size();

    //up:
    for (int i = row; i>=0; i--)
    {
        board[i][col] = false;
    }


       //down:
       for (int i = row; i<len; i++)
       {
           board[i][col] = false;
       }

      //left:
      for (int i = col; i>=0; i--)
      {
          board[row][i] = false;
      }
      
      
       //right:
       for (int i = col; i<len; i++)
       {
           board[row][i] = false;
       }
       
       
        //upper-left:
      for (int i = row, j = col; i>=0 && j>=0; i--, j--)
      {
          board[i][j] = false;
      }


         //downer-right:
         for (int i = row, j = col; i<len && j<len; i++, j++)
         {
             board[i][j] = false;
         }


      //upper-right:
      for (int i = row, j = col; i>=0 && j<len; i--, j++)
      {
          board[i][j] = false;
      }


        //downer-left:
        for (int i = row, j = col; i<len && j>=0; i++, j--)
        {
            board[i][j] = false;
        }
      
    
}


int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n,qx,qy,kx,ky,dx,dy;
   cin>>n>>qx>>qy>>kx>>ky>>dx>>dy;
   int qr = (n-qy);
   int qc = qx-1;
   int kr = (n-ky);
   int kc = kx-1;
   int dr = (n-dy);
   int dc = dx-1;


//    cout<<"Q: "<<qr<<" "<<qc<<"\n";
//    cout<<"K: "<<kr<<" "<<kc<<"\n";
//    cout<<"D: "<<dr<<" "<<dc<<"\n";

vector<vector<bool>> board(n, vector<bool>(n, true));

queenFillUp(board,qr,qc);

queue<pair<int,int>>qu;
qu.push({kr,kc});
bool ans = false;


while (!qu.empty())
{
    auto p = qu.front();
    qu.pop();
    int presentRow = p.first;
    int presentCol = p.second;


    for (int i = 0; i<8; i++)
    {
        int neighborRow = presentRow+(dir[i].first);
        int neighborCol = presentCol+(dir[i].second);

        if(isValid(neighborRow,neighborCol,n) && board[neighborRow][neighborCol]){
            qu.push({neighborRow,neighborCol});
            board[neighborRow][neighborCol] = false;

            if(neighborRow == dr && neighborCol == dc){
                ans = true;
                break;
            }
        }
    }

    if(ans){
        break;
    }
    
}



  ans == 1 ? cout<<"YES\n" : cout<<"NO\n";




return 0;

}


/*




8
4 4
1 3
3 1



8
4 4
2 3
1 6



8
3 5
1 2
6 1







*/