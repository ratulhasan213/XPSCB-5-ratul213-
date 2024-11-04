#include<bits/stdc++.h>
using namespace std;
int main(){
 
int n,m;
cin>>n>>m;
 
vector<int>arr(n+1);
for (int i = 1; i <n+1; i++)
{
    cin>>arr[i];
}
 
 
set<int>s;
vector<int>ans(n+1);
for (int i = n; i>=1; i--)
{
    s.insert(arr[i]);
    ans[i] = s.size();
}
 
 
 
 
 
for (int i = 1; i <=m; i++)
{
    int pos;
    cin>>pos;
    cout<<ans[pos]<<"\n";
}
 
 
 
 
return 0;
 
}