//https://codeforces.com/problemset/problem/1690/B
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
      int n;
      cin>>n;
      ll a[n];
      ll b[n];
      for (int i = 0; i <n; i++)
      {
          cin>>a[i];
      }

      for (int i = 0; i <n; i++)
      {
         cin>>b[i];
      }
     
      
      ll zeroDif = -1;
      ll dif = -1;
      bool ans = true;

      for (int i = 0; i <n; i++)
      {

         if(b[i] == 0){
            zeroDif = max(zeroDif,a[i] - b[i]);
         }
         else{
            
            if(dif == -1){
                dif = a[i]-b[i];
                if(dif<0){
                    ans = false;
                    break;
                }
            }
            else{
               
               if(dif!=a[i]-b[i]){
                  ans = false;
                  break;
               }
                 
            }
            
         }
      }


      if( dif!=-1 && zeroDif>dif){
        ans = false;
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

1
5
4 5 8 5 4
1 2 5 0 1


6
4
3 5 4 1
1 3 2 0
3
1 2 1
0 1 0
4
5 3 7 2
1 1 1 1
5
1 2 3 4 5
1 2 3 4 6
1
8
0
1
4
6


*/