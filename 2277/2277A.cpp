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
        vector<int> cnt(n + 2, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        int ans = 0, pre = 0;
        for (int v = 0; v <= n; v++) {
            pre += cnt[v];
            if (cnt[v] >= 1 && pre >= (v + 1) * k) {
                ans = v + 1;
            } else {
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
