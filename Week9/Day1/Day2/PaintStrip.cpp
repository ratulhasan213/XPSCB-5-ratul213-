//https://codeforces.com/problemset/problem/2040/B
#include<bits/stdc++.h>
using namespace std;
const int n = 1e5+10;
int arr[n];
void solve(){
  
  int op = 1;
  int lim = 1;
  int i =1;
  while (i<=n)
  {
      if(i==1){
        arr[i] = op;
        op++;
        i++;
      }
      else{
        int t = (lim*2)+2;
         while (i<=n && i<=t)
         {
           arr[i] = op;
           i++;
         }
         lim = i-1;
         op++; 
      }
  }
  
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

  int test;
  cin>>test;
  solve();
  while (test--)
  {
    int n;
    cin>>n;
    cout<<arr[n]<<"\n";
  }
  
   

return 0;

}