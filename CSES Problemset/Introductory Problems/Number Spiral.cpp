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
    int tt;
    cin >> tt;
    while(tt--) {
        ll x, y;
        cin >> x >> y;
        swap(x, y);
        ll ans = 0;
        if(y <= x) {
            ans = (x - 1) * (x - 1);
            if(x % 2 == 0) {
                ans += y;
            }
            else {
                ans += (2 * x) - y;
            }
        }
        else
        {
            ans = (y - 1) * (y - 1);
            if(y % 2 == 1) {
                ans += x;
            }
            else {
                ans += (2 * y) - x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
