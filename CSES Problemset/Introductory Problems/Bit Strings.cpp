/*
*   author: denimflame12
*   created: 19.02.2025 21:00:54
*/
 
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
 
const int MOD = 1e9 + 7;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    int res = 1;
    while(tt--) {
        res *= 2;
        res %= MOD;
    }
    cout << res << endl;
}
