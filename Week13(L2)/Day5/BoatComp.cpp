//https://codeforces.com/problemset/problem/1399/C
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
      int n;
      cin>>n;
      map<int,int>cnt;
      int val;

      for (int i = 0; i<n; i++)
      {
         cin>>val;
         cnt[val]++;
      }
      
      int ans = 0;

      for (int sum  = 2; sum<=100; sum++)
      { 
         int a = 0;
        for(auto[key,occ]: cnt){
           int need = sum - key;
           if(need>=1){
              if(cnt.count(need)){
                 a+=min(cnt[need],occ);
              }
           }
        }

        ans = max(ans,a);
  
      }
      

     cout<<ans/2<<"\n";
 
  
   }
   

return 0;

}


/*

1
4
2 2 1 1


1
4
1 2 3 2

1
4
4 3 3 3


5
5
1 2 3 4 5
8
6 6 6 6 6 6 8 8
8
1 2 2 1 2 1 1 2
3
1 3 3
6
1 1 3 4 2 2



*/