//https://codeforces.com/problemset/problem/2049/B
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
      if(s[0] == 's'){
        s[0] = '.';
      }

      if(s[n-1] == 'p'){
        s[n-1] = '.';
      }
      
      char temp = '$';
      bool ans = true;
     for (int i = 0; i <n; i++)
     {
        if(s[i]!='.'){
             if(temp=='$'){
              temp = s[i];
            }
          else{
           
           if(temp!=s[i]){
            ans = false;
            break;
             }
          }
        }
       
     }

     if(ans){
        cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }
     

   }
   

return 0;

}


/*


9
4
s.sp
6
pss..s
5
ppppp
2
sp
4
.sp.
8
psss....
1
.
8
pspspsps
20
....................


*/