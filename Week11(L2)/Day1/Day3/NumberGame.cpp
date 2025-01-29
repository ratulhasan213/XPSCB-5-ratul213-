//https://codeforces.com/problemset/problem/1749/C
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
     
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
      }



      int start = 0;
      int end = n;

      auto canBe = [&](int mid){
         multiset<int>mt;
         for (int i = 0; i <n; i++)
         {
            mt.insert(arr[i]);
         }
         
           for (int i = 1; i <=mid; i++)
           {
              int d = mid - i+1;
              auto up = upper_bound(mt.begin(),mt.end(),d);
              if(up!=mt.begin()){
                 up--;
                 if(*(up)<=d){
                    mt.erase(up);
                    if(mt.empty()){
                        return true;
                    }
                    auto f = mt.begin();
                    mt.erase(mt.begin());
                    int add = *f+d;
                    mt.insert(add);
                 }
                 else{
                    return false;
                 }
               
              }
              else{
                return false;
              }
              
           }
           return true;
           
      };


      int ans = -1;

      while (start<=end)
      {
         int mid = start+(end-start)/2;

         if(canBe(mid)){
            ans = max(ans,mid);
            start = mid+1;
         }
         else{
            end = mid-1;
         }
      }
      

      cout<<ans<<"\n";
   }
   

return 0;

}


/*

4
3
1 1 2
4
4 4 4 4
1
1
5
1 3 2 1 1


*/