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
   int n,k;
   cin>>n>>k;
   vector<int>arr(n);
   int x = 1;
   for (int i = 0; i <k; i++)
   {
      if(i%2==0){
         
        for (int j = i; j <n; j+=k)
        {
           arr[j] = x;
           x++;
        }
        
      }
      else{
        int l = i;
        while (l+k<n)
        {
          l+=k;
        }
        while (l>=0)
        {
          arr[l] = x;
          l-=k;
          x++;
        }
        
        
      }
       
        
   }


   for(auto x: arr){
    cout<<x<<" ";
   }

   cout<<"\n";

}
   
return 0;

}