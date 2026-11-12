#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int res = 0;
    int l = 0, r = n - 1;

    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        }
        else {
            char c = max(s[l], s[r]);

            for (char& x : s) {
                if (x == c) x--;
            }

            res++;
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

    return 0;
}