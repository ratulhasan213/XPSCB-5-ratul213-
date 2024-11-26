//https://codeforces.com/problemset/problem/1914/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n,k;
      cin>>n>>k;
     
      for (int i = 1; i <=k; i++)
      {
         cout<<i<<" ";
      }

      for (int i = n; i>k; i--)
      {
        cout<<i<<" ";
      }
      
      cout<<"\n";
      
      
   }
   

return 0;

}

/*


1
6 2

3
6 2
5 4
5 0


*/