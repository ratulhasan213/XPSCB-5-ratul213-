//https://codeforces.com/problemset/problem/1675/B
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
      ll arr[n];
      for (int i = 0; i <n; i++)
      {
        cin>>arr[i];
      }

      int indx = n-1;
      ll cnt = 0;
      bool impossible = false;
      while (indx>=1)
      {
        
        if(arr[indx] == 0){
            impossible = true;
            break;
        }
        else{
            while(arr[indx]<=arr[indx-1])
            {
               cnt++;
               arr[indx-1] = arr[indx-1]/2;
            }
            
        }

        if(impossible){
            break;
        }

        indx--;
      }
      
      if(impossible){
        cout<<"-1\n";
      }
      else{
        cout<<cnt<<"\n";
      } 
      
   }
   

return 0;

}

/*

7
3
3 6 5
4
5 3 2 1
5
1 2 3 4 5
1
1000000000
4
2 8 7 5
5
8 26 5 21 10
2
5 14


*/