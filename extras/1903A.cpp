#include<bits/stdc++.h>
using namespace std;  
int main(){
  int tt {}; std::cin>>tt;
  while(tt--){
    int n{}, k{};
    std::cin>>n>>k;
    std::vector<int> s(n);
    for(auto&a: s) std::cin>>a;

    if(n>k && k>1 || std::is_sorted(s.begin(),s.end()) || k==s.size()) std::cout<<"YES"<<std::endl;
    else std::cout<<"NO"<<std::endl;
    
  }
}

