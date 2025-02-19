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
    ll n;
    cin >> n;
    vector<ll> res1, res2;
    ll total = (n * (n + 1)) / 2;
    if(total % 2) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    ll mx = n;
    ll curr_sum = 0;
    vector<ll> taken(n + 1, 0);
    while(curr_sum < (total / 2)) {
        ll left = (total / 2) - curr_sum;
        if(left >= mx) {
            curr_sum += mx;
            res1.push_back(mx);
            taken[mx] = 1;
            mx--;
        }
        else
        {
            curr_sum += left;
            res1.push_back(left);
            taken[left] = 1;
        }
    }
    for(ll i = 1; i <= n; i++) {
        if(!taken[i]) {
            res2.push_back(i);
        }
    }
    cout << res1.size() << endl;
    for(auto it : res1) {
        cout << it << " ";
    }
    cout << endl;
    cout << res2.size() << endl;
    for(auto it : res2) {
        cout << it << " ";
    }
    cout << endl;
}
