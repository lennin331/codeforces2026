#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int n;
    std::cin >> n;
    std::vector<char> s(n);
    for (auto& a : s) std::cin >> a;

    if (n <= 2) {
        std::cout << 1 << "\n";
        return;
    }

    std::vector<char> comp;
    for (int i = 0; i < n; i++) {
        if (comp.empty() || comp.back() != s[i]) {
            comp.push_back(s[i]);
        }
    }

    int m = comp.size();
    if (m <= 2) {
        std::cout << m << "\n";
        return;
    }

        int max_saved = 0;
    for (int i = 1; i < m - 1; i++) {

        if (comp[i - 1] == comp[i + 1]) {
            max_saved = std::max(max_saved, 2);
        } else {
            max_saved = std::max(max_saved, 1);
        }
    }

     std::cout << m - max_saved << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
