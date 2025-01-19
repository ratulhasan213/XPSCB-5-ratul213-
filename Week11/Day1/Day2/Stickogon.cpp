//https://codeforces.com/problemset/problem/1957/A
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
      map<int,int>cnt;
      int val;
      for (int i = 0; i <n; i++)
      {
        cin>>val;
        cnt[val]++;
      }


      int ans = 0;

      for(auto[key,occ]:cnt){
         if(occ>=3){
            
            ans+=(occ/3); // triangle:) 3
             
         }
      }

      cout<<ans<<"\n";
      
   }
   

return 0;

}


/*

1
7
1 1 1 1 1 1 1


1
9
4 2 2 2 2 4 2 4 4

4
1
1
2
1 1
6
2 2 3 3 3 3
9
4 2 2 2 2 4 2 4 4





*/