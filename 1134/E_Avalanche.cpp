#include <bits/stdc++.h>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    std::cin>>t;
    while (t--){
        int n, k;
    std::cin >> n >> k;
    int xr = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        std::cin >> x;
        if (i % (k + 1) == 0)
            xr ^= (x % 2);
    }
    std::cout << (xr ? "Alice" : "Bob") << '\n';
    }

    return 0;
}