/*
*   author: denimflame12
*/
 
#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll temp = n;
    ll cnt_five = 0, cnt_two = 0;
    while(temp != 0) {
        cnt_five += (temp / 5);
        temp /= 5;
    }
    temp = n;
    while(temp != 0) {
        cnt_two += (temp / 2);
        temp /= 2;
    }
    cout << min(cnt_two, cnt_five) << endl;
}
