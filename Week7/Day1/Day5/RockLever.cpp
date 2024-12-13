//https:codeforces.com/problemset/problem/1420/B
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
    map<ll,ll>cnt;
    ll val;
    for (int i = 0; i <n; i++)
    {
        cin>>val;
        int len = __lg(val);
        cnt[len]++;
    }
   

   ll ans = 0;
    for(auto[key,val]: cnt){

         ans+=(val*(val-1))/2;
       
    }

    cout<<ans<<"\n";
    

 }
 


return 0;

}


/*

1
4
6 2 5 3

5
5
1 4 3 7 10
3
1 1 1
4
6 2 5 3
2
2 4
1
1

*/