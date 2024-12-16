//https://codeforces.com/problemset/problem/1601/A
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
   int arr[n];
   int m = -1;

   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
      m = max(m,arr[i]);
   }
   

   map<int, int>cnt;
   int len = __lg(m);

   for (int i = 0; i <n; i++)
   {
       for (int j = 0; j<=len; j++)
       {
         bool ok = (  (1<<j) & arr[i]);

         if(ok){
             cnt[j]++;
         }
       }
       
   }

   
   vector<int>ans;

   for (int k = 1; k<=n; k++)
   {
        bool divide = true;

         for(auto[key,val]: cnt){
              if(val%k!=0){
                divide = false;
                break;
              }
         }

         if(divide){
           ans.push_back(k);
         }
   }



   for(int v: ans){
    cout<<v<<" ";
   }

   cout<<"\n";

 }
   

return 0;

}

/*


5
4
4 4 4 4
4
13 7 25 19
6
3 5 3 1 7 1
1
1
5
0 0 0 0 0



*/