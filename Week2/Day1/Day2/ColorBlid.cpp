//https://codeforces.com/problemset/problem/1722/B
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;

   while (test--)
   {
       int col;
       cin>>col;

       vector<vector<char>>arr(2,vector<char>(col));
       char ch;
       for (int i = 0; i <2; i++)
       {
           for (int j = 0; j <col; j++)
           {
                 cin>>ch;
                 if(ch=='G'){
                    arr[i][j] = 'B';
                 }
                 else{
                    arr[i][j] = ch;
                 }
           }
           
       }

       string s1,s2;
       for (int i = 0; i <2; i++)
       {
           for (int j = 0; j <col; j++)
           {
              if(i==0){
                 s1.push_back(arr[i][j]);
              }
              else{
                s2.push_back(arr[i][j]);
              }
           }
      
       }

       if(s1==s2){
         cout<<"YES\n";
       }
       else{
        cout<<"NO\n";
       }
        
         
   }
   

return 0;

}
