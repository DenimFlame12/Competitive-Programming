/*
*   author: denimflame12
*   created: 21st February, 2025
*/
#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; ll x;
    cin >> n >> x;
    vector<int> v(n);
    for(int &it : v) {
        cin >> it;
    }
    map<ll, int> mp;
    vector<ll> pref(n + 1, 0LL);
    for(int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + (ll)v[i];
    }
    ll cnt = 0;
    for(int i = 0; i <= n; i++) {
        ll rem = pref[i] - x;
        cnt += (ll)mp[rem];
        mp[pref[i]]++;
    }
    cout << cnt << endl;
}
