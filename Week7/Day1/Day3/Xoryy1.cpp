//https://www.codechef.com/problems/XORRY1
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
     
      ll n;
      cin>>n;

   int c = __lg(n);
   ll a = pow(2,c);
    
   
    cout<<n-a<<" "<<a<<"\n";

  }
  
   
 

return 0;

}

/*

1
1


5
1
2
3
4
6

*/