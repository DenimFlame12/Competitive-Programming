/*
*   author: denimflame12
*   created: 19.02.2025 18:37:39
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n - 1);
    for(auto &it : v) {
        cin >> it;
    }
    sort(v.begin(), v.end());
    bool ok = true;
    for(int i = 1; i < n; i++) {
        if(v[i - 1] != i) {
            cout << i << endl;
            ok = false;
            break;
        }
    }
    if(ok) {
        cout << n << endl;
    }
    return 0;
}
