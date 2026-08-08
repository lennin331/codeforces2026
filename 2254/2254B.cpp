#include<bits/stdc++.h>
#include<string>

int main(){

  //count the unique characters in the string
  int t {};std::cin>>t;
  while(t--){
    int n {}; std::cin>>n;
    std::set<char> s;

    std::string a;
    std::cin>>a;
    for(int i=0; i<n; i++){
      s.insert(a[i]); 
    }

  std::cout<<s.size();
    // std::cout<<s.size()<<std::endl;
    for(auto x: s) std::cout<<x<<std::endl;
  }

  return 0;
}
