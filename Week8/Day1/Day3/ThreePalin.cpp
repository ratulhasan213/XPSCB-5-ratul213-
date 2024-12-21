//https://codeforces.com/problemset/problem/805/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   char arr[] = {'a','a','b','b'};
   int indx = 0;
   for (int i = 0; i <n; i++)
   {
      cout<<arr[indx];
      indx++;
      if(indx == 4){
        indx =0;
      }
   }
   

return 0;

}