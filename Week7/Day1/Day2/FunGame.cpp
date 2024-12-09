//https://codeforces.com/problemset/problem/1994/B
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

   string s,t;
   cin>>s>>t;

   int oneT = -1;
   int oneS = -1;

   if(s[0]=='1'){
    cout<<"YES\n";
   }
   else{
            int indx = 0;
          while (indx<n)
        {
           if(s[indx]=='1'){
              if(oneS ==-1){
               oneS = indx;
              } 
           }

           if(t[indx]=='1'){
             if(oneT == -1){
               oneT = indx;
            }
           }
           indx++;
       }

    //    cout<<oneS<<" "<<oneT<<"\n";

       if(oneS==-1){
           if(oneT==-1){
            cout<<"YES\n";
           }
           else{
            cout<<"NO\n";
           }
       }
       else{
          if(oneT==-1){
            cout<<"YES\n";
          }
          else{
              
              if(oneS<=oneT){
                cout<<"YES\n";
              }
              else{
                cout<<"NO\n";
              }
          }
       }
   }
 
 

 }

   
return 0;

}


/*

6
1
0
1
7
0110100
0110100
9
100101010
101111110
4
0011
1011
4
0100
0001
8
10110111
01100000


*/