/*
*   author: denimflame12
*   created: 19.02.2025 21:00:54
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++) {
        ll ans = ((i - 1) * (i + 4) * ((i * i - (3 * i)) + 4)) / 2;
        cout << ans << endl;
    }
    return 0;
}
