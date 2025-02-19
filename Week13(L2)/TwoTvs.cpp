//https://codeforces.com/problemset/problem/845/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 


 int n;
 cin>>n;
 map<ll,ll>cnt;
 ll left,right;
 for (int i = 0; i <n; i++)
 {
    cin>>left>>right;
    cnt[left]++;
    cnt[right+1]--;
 }

 vector<ll>arr;
 ll sum = 0;

 for(auto[key,val]: cnt){
     sum+=(val);
     arr.push_back(sum);
 }

 bool ans = true;
 for(ll x: arr){
    if(x>2){
        ans = false;
        break;
    }
 }


 ans == true ? cout<<"YES\n" : cout<<"NO\n";
 

return 0;

}


/*

3
1 2
2 3
4 5


4
1 2
2 3
2 3
1 2



*/