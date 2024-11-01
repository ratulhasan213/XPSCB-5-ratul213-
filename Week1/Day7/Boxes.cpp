//https://codeforces.com/contest/903/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

int n;
cin>>n;
map<long long int,long long int>cnt;

long long int num;
while (n--)
{
    cin>>num;
    cnt[num]++;
}


long long int mx = -(1e11);

for(auto[key,val]:cnt){
    mx = max(mx,val);
}

cout<<mx;
  

return 0;

}