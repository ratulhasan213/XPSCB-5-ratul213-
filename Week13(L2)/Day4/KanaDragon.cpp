//https://codeforces.com/problemset/problem/1337/B
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
      int h,n,m;
      cin>>h>>n>>m;

      int need = m*10;

      bool ans = false;
      if(h<=need){
        ans = true;
      }
      
    //   cout<<h<<"\n";
      while (n>0 && !ans)
      {

        if(h<=need){
            ans = true;
            break;
        }

        h = (h/2)+10;
        n--;

        // cout<<h<<"\n";
      }

      if(h<=need){
        ans = true;
    }


      ans == true ? cout<<"YES\n" : cout<<"NO\n";
      
   }
   

return 0;

}


/*

1
63 2 3

7
100 3 4
189 3 4
64 2 3
63 2 3
30 27 7
10 9 1
69117 21 2



*/