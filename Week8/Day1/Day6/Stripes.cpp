//https://codeforces.com/problemset/problem/1742/C
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {

       char arr[8][8];
       for (int i = 0; i <8; i++)
       {
          for (int j = 0; j <8; j++)
          {
              cin>>arr[i][j];
          }
          
       }

      //check row-wise:  Red
          bool isRead;
         for (int i = 0; i <8; i++)
       {     
           isRead = true;
          for (int j = 0; j <8; j++)
          {
             if(arr[i][j]!='R'){
                isRead = false;
             }
          }
         
          if(isRead){
            break;
          }
       }

       if(isRead){
        cout<<"R\n";
       }
       else{
          cout<<"B\n";   
              
       }

   }
   

return 0;

}


/*




4


....B...
....B...
....B...
RRRRRRRR
....B...
....B...
....B...
....B...


RRRRRRRB
B......B
B......B
B......B
B......B
B......B
B......B
RRRRRRRB


RRRRRRBB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB


........
........
........
RRRRRRRR
........
........
........
........

*/