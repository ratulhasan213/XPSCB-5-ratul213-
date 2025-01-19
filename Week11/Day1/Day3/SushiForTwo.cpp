//https://codeforces.com/problemset/problem/1138/A
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }

   int start = 0;
   int end = 0;
   vector<int>v;
   int len = 0;

   while (end<n)
   {
       if(arr[start] == arr[end]){
          
          len = max(len ,end-start+1);
            end++;
       }
       else{
           
           v.push_back(len);
           len = 0;
           start = end;
       }
   }

   v.push_back(len);


   int ans = 0; 
   int sz = v.size();

   for (int i = 1; i <sz; i++)
   {
        int f = v[i-1];
        int s = v[i];
        ans = max(ans, min(f,s)*2);
   }
   


        cout<<ans<<"\n";

   

return 0;

}



/*

7
2 2 2 1 1 2 2


6
1 2 1 2 1 2


9
2 2 1 1 1 2 2 2 2




*/