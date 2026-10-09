#include <bits/stdc++.h>
int main() {
    long long tt;
    std::cin >> tt;
    while (tt--) {
        long long n;
        std::string s;
        std::cin>>n>>s;
        std::stack<long long> st;
        std::vector<bool> v(n + 1, 0);
        for (long long i = 1; i <= n; i++) {
            if (s[i - 1] == '1') {
                st.push(i);
            }
            else if (s[i - 1] == '2') {
                if (!st.empty()) {
                    long long d = st.top();
                    st.pop();
                    v[d] = 1;
                } else {
                    v[i] = 1;
                }
            }
            else if (s[i - 1] == '3') {
                v[i] = 1;
            }
        }

        std::vector<long long> ans;
        for (long long i = 1; i <= n; i++) {
            if (!v[i]) {
                ans.push_back(i);
            }
        }
        std::cout<<ans.size()<<'\n';
        for (long long x : ans) {
            std::cout<<x<<' ';
        }
        std::cout << '\n';
    }
    return 0;
}