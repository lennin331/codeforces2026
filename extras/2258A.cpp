#include<bits/stdc++.h>
//#include <numeric>
int main(){
  int tt{};
  std::cin>>tt;
  while(tt--){
    int n{};
    std::cin>>n;
    std::vector<int> v(n, 0);
    for(auto&x: v) std::cin>>x;
    long long res = std::gcd(v[0], v[n-1]);
    std::cout<<res<<"\n";
  }
  return 0; 
}
