/*
*   author: denimflame12
*   created: 19.02.2025 20:46:53
*/

#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n == 1) {
        cout << 1 << endl;
    }
    else if(n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    }
    else {
        for(int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for(int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
