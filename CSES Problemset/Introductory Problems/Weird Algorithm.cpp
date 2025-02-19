/*
*   author: denimflame12
*   created: 19.02.2025 16:48:55
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n; 
    cout << n << " ";
    while(n != 1) {
        if(n % 2) {
            n *= 3; n++;
        }
        else {
            n /= 2;
        }
        cout << n << " ";
    }
}
