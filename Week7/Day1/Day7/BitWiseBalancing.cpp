//https://codeforces.com/contest/2020/problem/C
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
      ll b,c,d;
      cin>>b>>c>>d;

     ll num = max(b,c);
     num = max(num,d);

     int len = __lg(num);

     ll a = 0;

     for (int i = 0; i <=len; i++)
     {
        bool bitB = (1LL<<i)& b;
        bool bitC = (1LL<<i) & c;
        bool bitD = (1LL<<i) & d;

        bool ZeroCheck = ((0 | bitB) - (0 & bitC) )== bitD;
        bool OneCheck = ((1 | bitB) - (1 & bitC)) == bitD;

        if(ZeroCheck){
            continue;
        }
        else if(OneCheck){
            a+=(1LL<<i);
        }
        else{
            a = -1;
            break;
        }


     }

     cout<<a<<"\n";
     
        
      
   }
   

return 0;

}

/*


3
2 2 2
4 2 6
10 2 14


*/
