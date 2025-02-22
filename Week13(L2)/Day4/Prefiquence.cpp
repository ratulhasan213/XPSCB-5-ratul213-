//https://codeforces.com/problemset/problem/1968/B
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
      int n,m; // a = n , b = m
      cin>>n>>m;
      string a,b;
      cin>>a>>b;

      int i = 0;
      int j = 0;
      int k = 0;

      while (i<n && j<m)
      {
         if(a[i] == b[j]){
            k++;
            i++;
         }
         j++;
      }
      

     cout<<k<<"\n";


      
   }
   

return 0;

}


/*


6
5 4
10011
1110
3 3
100
110
1 3
1
111
4 4
1011
1111
3 5
100
11010
3 1
100
0




*/