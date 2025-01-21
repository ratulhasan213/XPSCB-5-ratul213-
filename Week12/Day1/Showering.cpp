//https://codeforces.com/problemset/problem/1999/C
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
      int n,s,m;
      cin>>n>>s>>m;

      int a,b;
      int temp = 0;
      int gap = -1;
      for (int i = 0; i <n; i++)
      {
          cin>>a>>b;
          if(i==0){
             gap = a-0;
             temp = b;
          }
          else{
            
            gap =  max(gap,(a-temp));
            temp = b;
          }
      }

      gap =  max(gap,(m-temp));

    //   cout<<gap<<"\n";


      if(gap>=s){
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
3 3 10
1 2
3 5
6 7

4
3 3 10
3 5
6 8
9 10
3 3 10
1 2
3 5
6 7
3 3 10
1 2
3 5
6 8
3 4 10
1 2
6 7
8 9


*/