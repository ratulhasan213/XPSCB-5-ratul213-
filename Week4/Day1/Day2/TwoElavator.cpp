//https://codeforces.com/problemset/problem/1729/A
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
       ll a,b,c;
       cin>>a>>b>>c;

      ll timeA = 0;
      ll timeB = 0;

      timeA = a-1;

      timeB = abs(b-c);
      timeB+=(c-1);

      if(timeA<timeB){
        cout<<"1\n";
      }
      else if(timeA>timeB){
        cout<<"2\n";
      }
      else{
        cout<<"3\n";
      }

   }
   

return 0;

}

/*

3
1 2 3
3 1 2
3 2 1


*/