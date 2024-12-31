//https://codeforces.com/problemset/problem/1618/C
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

      vector<ll>red;
      vector<ll>blue;

      bool r = true;

      for (int i = 0; i <n; i++)
      {
        if(r){
            red.push_back(arr[i]);
        }
        else{
            blue.push_back(arr[i]);
        }

        r = !r;
      }

     ll gcdRed = red[0];
     ll gcdBlue = blue[0];


     for(ll x: red){
        gcdRed = __gcd(gcdRed,x);
     }

     for(ll x: blue){
        gcdBlue = __gcd(gcdBlue,x);
     }


     bool cangcdRed = true;

     for(ll x: blue){
        if(x%gcdRed==0){
            cangcdRed = false;
            break;
        }
     }


     if(cangcdRed){
        cout<<gcdRed<<"\n";
     }
     else{
        bool cangcdBlue = true;
           for(ll x: red){
           if(x%gcdBlue==0){
              cangcdBlue = false;
               break;
          }
       }

       if(cangcdBlue){
        cout<<gcdBlue<<"\n";
       }
       else{
        cout<<"0\n";
       }
        
     }


      

      
   }
   
   

return 0;

}


/*

1
5
1 2 3 4 5



5
5
1 2 3 4 5
3
10 5 15
3
100 10 200
10
9 8 2 6 6 2 8 6 5 4
2
1 3




*/