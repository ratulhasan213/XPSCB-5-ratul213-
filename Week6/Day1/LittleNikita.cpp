//https://codeforces.com/problemset/problem/1977/A
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       int n,m;
       cin>>n>>m;

       if(n<m){
        cout<<"NO\n";
       }
       else if(n==m){
        cout<<"YES\n";
       }
       else{
        n = n-m;

        if(n%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
       }
   }
   

return 0;

}


/*
3
3 3
2 4
5 3


*/