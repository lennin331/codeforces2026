#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
//#define int long long // avoid overflow headaches (watch out: changes main's signature too)
// #define endl '\n' // NEVER use std::endl in loops, it flushes the stream every time
// typedef long long ll;
// typedef unsigned long long ull;
// typedef pair<int,int> pii;
// typedef vector<int> vi;
const int MOD = 1e9 + 7;
const int INF = 1e18;
inline int fastRead() {
    int x = 0, c = getchar_unlocked(), neg = 1;
    while (c < '0' || c > '9') { if (c == '-') neg = -1; c = getchar_unlocked(); }
    while (c >= '0' && c <= '9') { x = x * 10 + (c - '0'); c = getchar_unlocked(); }
    return x * neg;
};
void solve() { 
    int y{}; std::cin>>y;
    /*
    1996 < IC regional
    2005 < IC regional championship
    */
    std::vector<string> res;

    res.push_back("ICPC Regional");

    if (y >= 2019 && y != 2020 && y != 2021)
        res.push_back("ICPC Qual");

    if (y == 2026) {
        res.push_back("School Regional");
        res.push_back("School Qual");
    }

    std::cout << res.size() << '\n';
    //std::sort(res.begin(), res.end());
    for (auto& x : res)
        std::cout << x << '\n';

};
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t = 1;
    //cin >> t;

    while (t--) {
        solve();

    }
    return 0;
}
