//https://codeforces.com/problemset/problem/1676/E
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
      int n,q;
     cin>>n>>q;

    ll val;
    vector<int> arr;
  for (int i = 0; i <n; i++)
 {
    cin>>val;
    arr.push_back(val);
 }

  sort(arr.begin(),arr.end(),greater<ll>());
  vector<ll>pref(n);
  pref[0] = arr[0];

  for (int i = 1; i <n; i++)
  {
     pref[i] = pref[i-1]+arr[i];
  }
  

   for (int i = 0; i <q; i++)
   {
      cin>>val;
     auto l = lower_bound(pref.begin(),pref.end(),val);

      int indx = l-pref.begin()+1;
      if(indx == n+1){
         cout<<"-1\n";
      }
      else{
        cout<<indx<<"\n";
      }
   }


 }
 

   

   

return 0;

}

/*



1
8 7
4 3 3 1 1 4 5 9
1
10
50
14
15
22
30



3
8 7
4 3 3 1 1 4 5 9
1
10
50
14
15
22
30
4 1
1 2 3 4
3
1 2
5
4
6









1
2
-1
2
3
4
8
1
1
-1


*/