//https://codeforces.com/problemset/problem/1742/D
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

 
map<int,set<int>>cop;

 for (int i = 1; i <=1000; i++)
 {
    for (int j = 1; j<=1000; j++)
    {
        if(__gcd(i,j)==1){
           cop[i].insert(j);
        }
    }
    
 }
 


   int test;
   cin>>test;
   while (test--)
   {
      
      int n;
      cin>>n;
       vector<int>indx(1001,-1);
      int val;
      for (int i = 1; i <=n; i++)
      {    cin>>val;
           indx[val] = i;
      }

      // cout<<indx[1000]<<"\n";

      // for(int v: indx){
      //    cout<<v<<" ";
      // }


      int ans = -1;
      for (int i = 1; i <=1000; i++)
      {
          if(indx[i]!=-1){

            // cout<<i<<"\n";

            if(i == 1){
               // cout<<"h";
               ans = max(ans, 2*indx[i]);
            }
            else{
                   set<int>st = cop[i];
                   for(int x: st){
                    if(indx[x]!=-1){
                     //   cout<<x<<"\n";
                       ans = max(ans,indx[i]+indx[x]);
                    }
                 }
            }
            
          }
      }
      
      cout<<ans<<"\n";
      

      
   }
   

return 0;

}

/*

1
3
2 2 4

6
3
3 2 1
7
1 3 5 2 4 7 7
5
1 2 3 4 5
3
2 2 4
6
5 4 3 15 12 16
5
1 2 2 3 6



*/