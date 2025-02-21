//https://codeforces.com/problemset/problem/1612/B
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
      int n,a,b;
      cin>>n>>a>>b;

      int left = -1;
      int right = -1;

      if(a<b){
         left = n-a-1;
         right = b-2;
      }
      else{
         left = n-a;
         right = b-1;
      }

  int need = (n/2)-1;
      if(left<need || right<need){
         cout<<"-1\n";
      }
      else{
        int num = n;
        int c = (n/2)-1;
        cout<<a<<" ";
        while (c)
        {
            if(num!=b){
                cout<<num<<" ";
                c--;
            }
            num--;
        }

        c = (n/2)-1;
        num = 1;
        cout<<b<<" ";
        while (c)
        {
            if(num!=a){
                cout<<num<<" ";
                c--;
            }
            num++;
        }

        cout<<"\n";
        
        
      }

      

   }
   

return 0;

}



/*

1
6 2 5

1
6 4 3

1
6 1 3




7
6 2 5
6 1 3
6 4 3
4 2 4
10 5 3
2 1 2
2 2 1



*/