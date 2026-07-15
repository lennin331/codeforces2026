#include<bits/stdc++.h>
#include<string>
#include<algorithm>
#include<cmath>
int main(){
  // std::ios_base::sync_with_stdio(false);
  // std::cin_tie(false);
  // std::cout_tie(false);
  int t; std::cin>>t;
  while(t--){
    int n = 0;std::cin>>n;
    std::string s; std::cin>>s;
    int res = 0;
    int max_res = 0;
    int hash_count = 0;
    for(int i=0; i<n; i++){
      if(s[i]=='#'){
        hash_count++;
      } else {
        res = hash_count;
        max_res = std::max(res, max_res);
        hash_count = 0;
      }
    }
    max_res = std::max(max_res, hash_count);
    std::cout<<(max_res+1)/2<<std::endl;    
  }
  return 0;


}
