#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int res = 0;

    for (char c = 'z'; c > 'a'; c--) {
        bool found = false;

        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1] &&
                max(s[i], s[n - i - 1]) == c) {
                found = true;
                break;
            }
        }

        if (found) {
            for (char& x : s) {
                if (x == c) x--;
            }
            res++;
            c++; 
        }
    }

    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();
}