//https://codeforces.com/problemset/problem/1900/A
#include<bits/stdc++.h>
using namespace std;
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

   
      int ans = 0;

      int i = 0;
      int c = 0;
      while (i<n)
      {

         if(s[i]!='#'){
            c++;
         }
         else
         {
            if(c>2){
            ans = 2;
            break;
           }
           else{
              ans+=c;
              c = 0;
           }
         }

          if(c>2){
            ans = 2;
            break;
          }
         
        i++;

        if(i==n){
            ans+=c;
        }
      }

      cout<<ans<<"\n";
      
      
   }
   

return 0;

}



/*


1
3
...

5
3
...
7
##....#
7
..#.#..
4
####
10
#...#..#.#


*/