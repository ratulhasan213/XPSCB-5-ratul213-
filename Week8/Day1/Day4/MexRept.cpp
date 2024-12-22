//https://codeforces.com/problemset/problem/1863/C
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
       int n,k;
       cin>>n>>k;
       ll arr[n];
       ll cop[n];
       for (int i = 0; i <n; i++)
       {
          cin>>arr[i];
          cop[i] = arr[i];
       }

       sort(cop,cop+n);

       ll mex = n;
       for (int i = 0; i<n; i++)
       {
          if(cop[i]!=i){
            mex = i;
            break;
          }
       }


       int dum[n+1];
       dum[0] = mex;
       int indx = 1;
       for (int i = 0; i<n; i++)
       {
          dum[indx] = arr[i];
          indx++;
       }


       deque<ll>dq;
       ll d = (k-1)%(n+1);

       ll last = d;
       ll first = n-d;

       //taking form last

       int l = n;
       while (last--)
       {
           dq.push_front(dum[l]);
           l--;
       }


       //taking from first:

       for (int i = 0; i <first; i++)
       {
           dq.push_back(dum[i]);
       }
       
       
       for(ll x: dq){
        cout<<x<<" ";
       }

       cout<<"\n";
       
       
   }
   


return 0;

}


/*


5
1 2
1
3 1
0 1 3
2 2
0 2
5 5
1 2 3 4 5
10 100
5 3 0 4 2 1 6 9 10 8



*/