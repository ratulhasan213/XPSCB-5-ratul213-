//https://codeforces.com/problemset/problem/1326/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

int n;
cin>>n;
ll arr[n];
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}


ll ans[n];
ans[0] = arr[0];

ll mx = arr[0];

for (int i = 1; i <n; i++)
{
    ans[i] = mx+arr[i];
    mx = max(mx,mx+arr[i]);
}


for (int i = 0; i <n; i++)
{
    cout<<ans[i]<<" ";
}


cout<<"\n";



   

return 0;

}


/*


5
0 1 1 -2 1



3
1000 999999000 -1000000000


5
2 1 2 2 3




*/