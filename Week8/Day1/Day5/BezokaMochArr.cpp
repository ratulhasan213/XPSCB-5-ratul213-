//https://codeforces.com/problemset/problem/1975/A
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

      bool alreadySorted = true;
      for (int i = 1; i <n; i++)
      {
          if(arr[i]<arr[i-1]){
            alreadySorted = false;
          }
      }

      if(alreadySorted){
        cout<<"YES\n";
      }
      else{
        bool ans = true;
        int f = arr[0];
        for (int i = 0; i <n-1; i++)
        {
            if(arr[i]>arr[i+1]){
               
                for ( int j = i+1; j <n-1; j++)
                {
                    if(arr[j]>arr[j+1] || arr[j]>f){
                        ans = false;
                        break;
                    }
                }

                if(arr[n-1]>arr[0]){
                    ans = false;
                }
              
                
            }
              if(!ans){
                    break;
            }
        }

        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
      }
      
      
   }
   

return 0;

}

/*

1
10
5 9 9 9 1 2 3 4 5 5



3
6
1 1 4 5 1 4
5
7 9 2 2 3
3
1 2 3



*/