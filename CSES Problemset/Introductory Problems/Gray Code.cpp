/*
*   author: denimflame12
*   created: 21st February, 2025
*/
#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define ff first
#define ss second

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int len = s.length();
    map<char, int> mp;
    for(auto it : s) {
        mp[it]++;
    }
    string front;
    int cnt = 0;
    char odd = 'A';
    for(auto it : mp) {
        if(it.ss % 2 == 1) {
            cnt++;
            if (cnt > 1) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            odd = it.ff;
        }
        else {
            for(int i = 0; i < (it.ss / 2); i++) {
                front += it.ff;
            }
        }
    }
    string back = front;
    reverse(back.begin(), back.end());
    if(cnt == 0) {
        cout << front << back << endl;
        return 0;
    }
    cout << front;
    for(int i = 0; i < mp[odd]; i++) {
        cout << odd;
    }
    cout << back << endl;
}
