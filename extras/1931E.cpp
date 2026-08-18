//for the first approach of totaling the significant numbers then checking if > m.
//using similar approach
#include<bits/stdc++.h>
int main(){
  int tt = 0; std::cin>>tt;
  while(tt--){
    int n = 0, m = 0; 
    std::cin>>n>>m;
    std::vector<std::string> num(n);
    std::vector<long long> zero(n);long long total = 0;
    for(auto &a: num){
      std::cin>>a;
    }
    for(int i=0; i<n; i++){
      int len = num[i].size(); int z = 0;
      for(int j = len - 1; j>=0 && num[i][j] == '0'; j--) z++;
      zero[i] = z;
      total += len - z; //for sho survive's count 
    }
    std::sort(zero.rbegin(), zero.rend());
    // for(auto x: zero) std::cout<<x<<" ";
    // std::cout<<total<<" ";
    for(int i=1 ; i<n; i+=2) total += zero[i];
    std::cout<<(total > m ? "Sasha":"Anna")<<"\n"; // this is called a ternary if/else operation Btw

  }
}

