//https://codeforces.com/problemset/problem/1669/G
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
     int row,col;
     cin>>row>>col;

     char grid [row][col];
     for (int i = 0; i <row; i++)
     {
         for (int j = 0; j<col; j++)
         {
            cin>>grid[i][j];
         }
         
     }




        for (int j = 0; j<col; j++)
     {

            int bi = row-1;
            int bj = j;
            int rock = 0;
         for (int i = row-1; i>=0; i--)
         {
            // cout<<grid[j][i];
            // cout<<i<<","<<j<<"\n";

            char ch = grid[i][j];

            if(ch == '*'){
                rock++;
                grid[i][j] = '.';
            }

            if(ch == 'o'){
                int ni = i;
                int nj = j;

                if(bi==row-1){
                    if(grid[bi][bj]=='o'){
                       bi--;
                    }
                    
                }
                else{
                    bi--;
                }

                while (bi>ni && rock>0)
                {
                    grid[bi][bj] = '*';
                    bi--;
                    rock--;
                }

                bi = ni;
                bj = nj;
                

            }


            if(i==0){

                if(bi==row-1){
                    if(grid[bi][bj]=='o'){
                       bi--;
                    }
                    
                }
                else{
                    bi--;
                }
                while (bi>=0 && rock>0)
                {
                    grid[bi][bj] = '*';
                    bi--;
                    rock--;
                }
                
            }


         }
         
     }




    
        // cout<<"\n\n\n";


        for (int i = 0; i <row; i++)
       {
          for (int j = 0; j<col; j++)
          {
            cout<<grid[i][j];
          }
          cout<<"\n";
         
        }



     
   }
   

return 0;

}


/*



1
5 5
*****
*....
*****
....*
*****



3
6 10
.*.*....*.
.*.......*
...o....o.
.*.*....*.
..........
.o......o*
2 9
...***ooo
.*o.*o.*o
5 5
*****
*....
*****
....*
*****



*/