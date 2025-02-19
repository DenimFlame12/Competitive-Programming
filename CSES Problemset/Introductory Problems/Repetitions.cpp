/*
*   author: denimflame12
*   created: 19.02.2025 20:30:37
*/

#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.length();
    int cnt = 1;
    int ans = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] == s[i - 1]) {
            cnt++;
            ans = max(ans, cnt);
        }
        else {
            cnt = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
