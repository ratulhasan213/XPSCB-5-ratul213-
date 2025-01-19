//https://codeforces.com/problemset/problem/1851/C
#include<bits/stdc++.h>
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
      int arr[n];
      for (int i = 0; i <n; i++)
      {
         cin>>arr[i];
      }


      int start = 0;
      int end = n-1;

      int startVal = arr[start];
      int endVal = arr[end];

      
      int countStart = 0;
      int startBoundary = -1;

      int countEnd = 0;
      int endBoundary = -1;
      
      while (start<n)
      {
           if(arr[start] == startVal){
             countStart++;
           }

           if(countStart == k){
            startBoundary = start;
              break;
           }

           start++;
      }


      if(startBoundary == -1){
        cout<<"NO\n";
      }
      else{
           
           while (end>=0)
           {
               if(arr[end] == endVal){
                  countEnd++;
               }

               if(countEnd == k){
                  endBoundary = end;
                  break;
               }

               end--;
           }

           if(endBoundary == -1){
            cout<<"NO\n";
           }

           else{
              if(startBoundary<endBoundary){
                cout<<"YES\n";
              }
              else{
                 if(arr[0] == arr[n-1]){
                    cout<<"YES\n";
                 }
                 else{
                    cout<<"NO\n";
                 }
              }
           }
           
      }
      
      
   }
   

return 0;

}





/*


10
4 2
1 1 1 1
14 3
1 2 1 1 7 5 3 3 1 3 4 4 2 4
3 3
3 1 3
10 4
1 2 1 2 1 2 1 2 1 2
6 2
1 3 4 1 6 6
2 2
1 1
4 2
2 1 1 1
2 1
1 2
3 2
2 2 2
4 1
1 1 2 2



*/