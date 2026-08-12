#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt {};
  cin >> tt;
  while (tt--) {
    long long a {}, b {}, c {};
    cin >> a >> b >> c;
    cout << min({abs(a - b), abs(a - c), abs(b - c)}) << "\n";
  }

  return 0;
}
