//https://codeforces.com/problemset/problem/1742/E
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

    ll height[n];
   vector<pair<ll,ll>>query;

    for (int i = 0; i <n; i++)
    {
      cin>>height[i];
    }
    
    ll val;
    for (int i = 0; i <q; i++)
    {
       cin>>val;
       query.push_back({val,i});
    }

    sort(query.begin(),query.end());



    int indx = 0;
    int j = 0;
    ll currentSum = 0;

    vector<ll>ans(q,0);

    while (indx<q)
    {
       int x = query[indx].first; 

       while (j<n)
       {
          if(height[j]>x){
            break;
          }

          currentSum+=height[j];
          j++;
       }
       
        ans[query[indx].second] = currentSum;
        indx++;
    }


    for(ll v: ans){
      cout<<v<<" ";
    }

    cout<<"\n";
    

 }
 
   

return 0;

}




/*


1
3 1
1000000000 1000000000 1000000000
1000000000



3
4 5
1 2 1 5
1 2 4 9 10
2 2
1 1
0 1
3 1
1000000000 1000000000 1000000000
1000000000



*/