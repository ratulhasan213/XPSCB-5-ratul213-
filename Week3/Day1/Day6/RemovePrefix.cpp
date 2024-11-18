//https://codeforces.com/problemset/problem/1714/B
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
      map<int,int>cnt;

      for (int i = 0; i <n; i++)
      {
           cin>>arr[i];
           cnt[arr[i]]++;
      }

      
     int s = cnt.size();
    int len = n;

      for (int i = 0; i <n; i++)
      {
          int val = arr[i];
          if(s<len){
            len--;
            if(cnt[val]-1 == 0){
                cnt.erase(val);
                s--;
            }else if(s == len){
                break;
            }
            else{
                cnt[val]--;
            }
          }

      }
      

      cout<<n-len<<"\n";
      
   }
   

return 0;

}

