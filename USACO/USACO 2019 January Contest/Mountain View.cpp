/*
*   author: denimflame12
*   created: 06.03.2025 21:08:27
*/
#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define int int64_t

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("mountains.in", "r", stdin);
    freopen("mountains.out", "w", stdout);
    int n;
    cin >> n;
    vector<pair<int, int>> mountains(n);
    for(int i = 0; i < n; i++) {
        cin >> mountains[i].ff >> mountains[i].ss;
    }
    auto cmpp = [&](pair<int, int> &m1, pair<int, int> &m2) -> bool {
        if (m1.ff - m1.ss == m2.ff - m2.ss)
            return (m1.ff + m1.ss) > (m2.ff + m2.ss);
        return (m1.ff - m1.ss) < (m2.ff - m2.ss); 
    };
    sort(mountains.begin(), mountains.end(), cmpp);
    int mx = -1;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(mountains[i].ff + mountains[i].ss > mx) {
            mx = mountains[i].ff + mountains[i].ss;
            ans++;
        }
    }
    cout << ans << endl;
}
