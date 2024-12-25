//https://codeforces.com/problemset/problem/1582/B
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
      ll one = 0;
      ll zero = 0;
      ll val;
      for (int i = 0; i <n; i++)
      {
        cin>>val;
        if(val == 0){
            zero++;
        }
        else if(val == 1){
            one++;
        }
      }

      cout<<(1LL<<zero)*one<<"\n";
      
   }
   

return 0;

}

/*

5
5
1 2 3 4 5
2
1000 1000
2
1 0
5
3 0 2 1 1
5
2 1 0 3 0


*/