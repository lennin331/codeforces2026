#include<bits/stdc++.h>
int main(){
  int tt {};
  std::cin>>tt;
  while(tt--){
    int n, a, b;
    std::cin>>n>>a>>b;
    if(a == b && b == n && n == a || a + b + 2 <= n) std::cout<<"YES"<<std::endl;
    else std::cout<<"NO"<<std::endl;
    
  }
}
