/*
*   author: denimflame12
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
        int a, b;
        cin >> a >> b;
        if ((2 * a - b) % 3 || (2 * a - b) < 0 || (2 * b - a) % 3 || (2 * b - a) < 0)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}
