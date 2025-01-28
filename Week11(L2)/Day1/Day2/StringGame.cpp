//https://codeforces.com/problemset/problem/778/A
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   string s,p;
   cin>>s>>p;
   int n = s.size();
   int arr[n];
   for (int i = 0; i<n; i++)
   {
      cin>>arr[i];
      arr[i]--;
   }

//    for (int i = 0; i <n; i++)
//    {
//       cout<<arr[i]<<" ";
//    }
   

   int start = 0;
   int end = n;

    int lenP = p.size();

   auto canDelete = [&](int mid){
          
      vector<bool>marked(n,false);
      for (int i = 0; i <mid; i++)
      {
         marked[arr[i]] = true;
      }
      
     
       string d;
       for (int i = 0; i<n; i++)
       {
           if(!marked[i]){
            d.push_back(s[i]);
           }
       }

       int lenD = d.size();

       int pi = 0;
       int di = 0;


       while (di<lenD && pi<lenP)
       {
          if(d[di] == p[pi]){
              pi++;
          }
          di++;
       }
       
       return pi == lenP; 
   };


   int ans = 0;


   while (start<=end)
   {
      int mid = start+(end-start)/2;

      if(canDelete(mid)){
          ans = mid;
          start = mid+1;
          
      }
      else{
         end = mid-1;
        
      }
   }

   cout<<ans<<"\n";
   
   

return 0;

}



/*


ababcba
abb
5 3 4 1 7 6 2


bbbabb
bb
1 6 3 4 2 5



*/