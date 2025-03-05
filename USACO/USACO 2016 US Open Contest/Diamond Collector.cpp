/*
*   author: denimflame12
*   created: 05.03.2025 15:34:51
*/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    auto Max_Pos = [&](const vector<int> &vv) -> vector<int> {
        int len = vv.size();
        vector<int> mx(len);
        for(int i = 0; i < n; i++) {
            auto it = lower_bound(vv.begin(), vv.end(), vv[i] + k + 1) - vv.begin();
            mx[i] = it - i;
        }
        return mx;
    };
    vector<int> res = Max_Pos(v);
    int mx = *max_element(res.begin(), res.end());
    vector<int> till(n + 1, 0);
    for(int i = 0; i < n; i++) {
        int it = lower_bound(v.begin(), v.end(), v[i] - k) - v.begin();
        mx = max(mx, res[i] + till[it]);
        till[i + 1] = max(till[i], res[i]);
    }
    cout << mx << endl;
}
