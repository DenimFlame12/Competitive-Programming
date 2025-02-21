/*
*   author: denimflame12
*   created: 21st February, 2025
*/
#include <bits/stdc++.h>

using namespace std;
#define ll long long int

const ll INF = 1e18;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int &it : v) {
        cin >> it;
    }
    ll curr = 0, sum = -INF;
    for(int i = 0; i < n; i++) {
        curr += (ll)v[i];
        sum = max(sum, curr);
        if(curr < 0LL) {
            curr = 0LL;
        }
    }
    cout << sum << endl;
}
