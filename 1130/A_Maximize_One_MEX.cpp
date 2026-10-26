#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1), pos(n);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }

        int p = n - k + 1; 

        vector<bool> s(n + 1, false);
        int mi = 1;
        for (int i = 1; i <= p; i++) {
            s[a[i]] = true;
            if (a[i] > a[mi]) mi = i;
        }

        int m = 0;
        while (s[m]) m++;

        if (m == p) {
            cout << -1 << "\n";
        } else {
            cout << mi << " " << pos[m] << "\n";
        }
    }
    return 0;
}