#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    ll a, b;
    cin >> a >> b;

    ll g = __gcd(a, b); 
    while (b > 1) {
        ll d = __gcd(g, b);  
        if (d == 1) break;  
        while (b % d == 0) b /= d;  
    }

    cout << (b == 1 ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--) {
        solve();
    }

    return 0;
}

/*


3
120 75
128 16
7 8



Yes
Yes
No


*/
