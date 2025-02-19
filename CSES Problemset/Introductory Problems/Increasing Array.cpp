/*
*   author: denimflame12
*   created: 19.02.2025 20:39:13
*/

#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it : v) {
        cin >> it;
    }
    ll ans = 0;
    for(int i = 1; i < n; i++) {
        ans += max(0LL, (ll)v[i - 1] - (ll)v[i]);
        v[i] += max(0LL, (ll)v[i - 1] - (ll)v[i]); 
    }
    cout << ans << endl;
    return 0;
}
