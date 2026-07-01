#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
// ---------- Type shortcuts ----------
// #define int long long          // avoid overflow headaches (watch out: changes main's signature too)
// #define endl '\n'               // NEVER use std::endl in loops, it flushes the stream every time
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
    //solution here
};
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t = 1;
    cin >> t;
    int x = 100000;
    int y = 0;
    while (t--) {
        solve();

    }
    return 0;
}