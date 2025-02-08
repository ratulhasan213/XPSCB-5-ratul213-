//https://codeforces.com/problemset/problem/776/B
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


ll maxN = 1e5+5;
vector<bool>prime(maxN,true);

void checkPrime(){
    for (int i = 2; i*i<=maxN; i++)
    {
        if(prime[i]){
            for (int j = 2*i; j<=maxN; j+=i)
           {
               prime[j] = false;
           }
        }
        
    }
    
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 
  
  checkPrime();
 
     ll n;
     cin>>n;
     vector<ll>ans;
      int one = 0;
      int two = 0;
     for (int i = 2; i <=n+1; i++)
     {
          if(prime[i]){
            ans.push_back(1);
            one++;
          }
          else{
            ans.push_back(2);
            two++;
          }
     }

     if(two == 0 || one == 0){
        cout<<1<<"\n";
        for(ll x: ans){
            cout<<x<<" ";
        }
     }
     else{
        cout<<2<<"\n";
         for(ll x: ans){
            cout<<x<<" ";
        }
     }
     cout<<"\n";
     

   

return 0;

}