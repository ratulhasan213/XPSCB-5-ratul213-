//https://codeforces.com/problemset/problem/678/C
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr); 

ll n,a,b,p,q;
cin>>n>>a>>b>>p>>q;


// a = p = red
// b = q = blue

ll mx = max(p,q);
ll mn = min(p,q);

ll Lcm = (a/__gcd(a,b))*b;

// cout<<Lcm<<"\n";

ll cntA = (n/a);
ll cntB = (n/b);
ll cntBoth = (n/Lcm);

cntA-=cntBoth;
cntB-=cntBoth;

ll ans = (cntA*p);
ans+=(cntB*q);
ans+=(cntBoth*mx);

cout<<ans<<"\n";



   

return 0;

}


/*

20 2 3 3 5


5 2 3 12 15


*/