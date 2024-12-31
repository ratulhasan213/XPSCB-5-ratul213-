//https://codeforces.com/problemset/problem/1285/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm(ll a,ll b){
    return(a/__gcd(a,b))*b;
}
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

ll x;
cin>>x;
if(x == 1){
    cout<<"1 1\n";
}
else{


vector<ll>div;
for (ll i = 1; i*i <=x; i++)
{
    if(x%i==0){
        div.push_back(i);
        if((x/i)!=i){
            div.push_back((x/i));
        }
    }
}

sort(div.begin(),div.end());


int start = 0;
int end = div.size()-1;

ll a = 0, b = 0, mn = 1e15;

ll ansA, ansB;

while (start<end)
{
   a = div[start];
   b = div[end];

   if(lcm(a,b) == x){
      if(mn == 1e15){
         mn = max(a,b);
         ansA = a;
         ansB = b;
      }
      else{
         if(mn>max(a,b)){
            ansA = a;
            ansB = b;
            mn = max(a,b);
         }
      }
   }

   start++;
   end--;
}


cout<<ansA<<" "<<ansB<<"\n";

}



// for(ll v: div){
//     cout<<v<<" ";
// }

// cout<<"\n";

   

return 0;

}