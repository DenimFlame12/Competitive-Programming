/*
*   author: denimflame12
*   created: 06.03.2025 22:21:26
*/
#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("rental.in", "r", stdin);
    freopen("rental.out", "w", stdout);
    int n, m, r;
    cin >> n >> m >> r;
    vector<int> cow(n), price(r);
    vector<pair<int, int>> shops(m);
    for(auto &it : cow) {
        cin >> it;
    }
    for(int i = 0; i < m; i++) {
        cin >> shops[i].second >> shops[i].first;
    }
    for(int i = 0; i < r; i++) {
        cin >> price[i];
    }
    sort(cow.rbegin(), cow.rend());
    sort(shops.rbegin(), shops.rend());
    sort(price.begin(), price.end());
    price.push_back(0);
    reverse(price.begin(), price.end());
    for(int i = 1; i <= r; i++) {
        price[i] += price[i - 1];
    }
    int mx = 0;
    int ptr = 0;
    int sold = 0;
    for(int i = 0; i < n; i++) {
        while(cow[i] != 0 && ptr < m) {
            int mn = min(cow[i], shops[ptr].second);
            cow[i] -= mn;
            shops[ptr].second -= mn;
            sold += (mn * shops[ptr].first);
            if(shops[ptr].second != 0) {
                continue;
            }
            ptr++;
        }
        mx = max(mx, price[min(r, n - i - 1)] + sold);
    }
    cout << max(mx, price[min(r, n)])<< endl;
}
