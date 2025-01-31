//https://codeforces.com/problemset/problem/1833/B
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
    ll n,k;
    cin>>n>>k;

    vector<pair<ll,int>>arr;
    ll brr[n];
    
    ll val;
    for (int i = 0; i <n; i++)
    {
        cin>>val;
        arr.push_back({val,i});
    }
      
       for (int i = 0; i <n; i++)
    {
      
       cin>>brr[i]; 
    }

    sort(arr.begin(),arr.end());


   

    sort(brr,brr+n);


    ll ans[n]={0};

  for (int i = 0; i <n; i++)
  {
  
    ans[arr[i].second] = brr[i];
  }
  

  for (int i = 0; i <n; i++)
  {
      cout<<ans[i]<<" ";
  }


  cout<<"\n";
  

    
 }
 
   

return 0;

}


/*


1
5 2
1 3 5 3 9
2 5 11 2 4



3
5 2
1 3 5 3 9
2 5 11 2 4
6 1
-1 3 -2 0 -5 -1
-4 0 -1 4 0 0
3 3
7 7 7
9 4 8



*/