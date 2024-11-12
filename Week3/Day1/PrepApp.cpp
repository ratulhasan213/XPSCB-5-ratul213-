//https://codeforces.com/problemset/problem/1791/C
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
         int start = 0;
         int end = n-1;
       
         while (start<end)
         {
              if(s[start]==s[end]){
                break;
              }
         

              start++;
              end--;
         }

         cout<<(end-start)+1<<"\n";
         
   }
   

return 0;

}

/*


9
3
100
4
0111
5
10101
6
101010
7
1010110
1
1
2
10
2
11
10
1011011010






1
2
5
0
3
1
0
2
4



1
2
5
0
3
1
0
2
4



*/