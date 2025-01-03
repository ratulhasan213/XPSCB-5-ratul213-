//https://codeforces.com/problemset/problem/1389/A
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
      ll l,r;
      cin>>l>>r;

     if(2*l>r){
    cout<<"-1 -1\n";
     }
    else{
       cout<<l<<" "<<2*l<<"\n";
    }
}


   

return 0;

}