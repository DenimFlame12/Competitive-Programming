/*
*   author: denimflame12
*   created: 06.03.2025 22:04:32
*/
#include <bits/stdc++.h>
using namespace std;

struct val {
    int value, id;
};

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("sort.in", "r", stdin);
    freopen("sort.out", "w", stdout);
    int n;
    cin >> n;
    vector<val> v(n);
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i].value;
        v[i].id = i + 1;
    }
    auto cmp = [&](val &v1, val &v2) -> bool {
        return (v1.value == v2.value ? v1.id < v2.id : v1.value < v2.value);
    };
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++) {
        cnt = max(cnt, v[i].id - i);
    }
    cout << cnt << endl;
}
