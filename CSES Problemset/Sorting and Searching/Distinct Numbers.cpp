/*
*   author: denimflame12
*   created: 21st February, 2025
*/
#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    while(n--) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << (int)s.size() << endl;
}
