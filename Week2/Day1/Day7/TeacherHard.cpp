//https://codeforces.com/problemset/problem/2005/B2
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


   int test;
   cin>>test;
   while (test--)
   {
       ll n;
       int m,q;
       cin>>n>>m>>q;
        vector<ll>T(m);
        int Tval;
       for (int i = 0; i <m; i++)
       {
           cin>>Tval;
           Tval--;
           T[i] = Tval;
       }

       sort(T.begin(),T.end());

       int leftMost = T[0];
       int rihghtMost = T[m-1];
        

       for (int i = 0; i <q; i++)
       {
           int dav;
           cin>>dav;

           auto lb = lower_bound(T.begin(),T.end(),dav);
           
           if(lb!=T.end()){
             
             if(lb == T.begin()){
                //no smaller value:
                 int largeVal = *lb;
                 cout<<(largeVal-1)+1<<"\n";
             }
             else {
                int largeVal = *lb;
                lb--;
                int smallVal = *lb;

                cout<<(largeVal-smallVal)/2<<"\n";
             }

           }
           else{
               cout<<(n-rihghtMost)-1<<"\n";
           }

       }
       
       
   }
   

return 0;

}


/*


1
10 3 3
1 4 8
2 3 10




2
8 1 1
6
3
10 3 3
1 4 8
2 3 10


*/