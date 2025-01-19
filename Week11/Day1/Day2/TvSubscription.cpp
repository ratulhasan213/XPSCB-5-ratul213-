//https://codeforces.com/problemset/problem/1225/B1
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

 int test;
 cin>>test;
 while (test--)
 {
   int n,k,d;
   cin>>n>>k>>d;
   int arr[n];
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }
   

   int start = 0;
   int end = 0;
   map<int,int>cnt;
 
  for (int i = 0; i <d; i++)
  {
    end++;
    cnt[arr[i]]++;
  }
   
   int m = cnt.size();

   while (end<n)
   {
     cnt[arr[start]]--;
     if(cnt[arr[start]]==0){
        cnt.erase(arr[start]);
     }
     start++;
     cnt[arr[end]]++;
     end++;

      if(cnt.size()<m){
         m = cnt.size();
      }
       
   }

   cout<<m<<"\n";
 }
 

 
return 0;

}



/*



4
5 2 2
1 2 1 2 1
9 3 3
3 3 3 2 2 2 1 1 1
4 10 4
10 8 6 4
16 9 8
3 1 4 1 5 9 2 6 5 3 5 8 9 7 9 3



*/