#include<bits/stdc++.h>
int main(){
  int t {}; std::cin>>t;
  while(t--){
    int n {}; std::cin>>n;
    int pos_c {}, neg_c {};
    int sum {};
    for(int i=0; i<n; i++){
      int curr {}; std::cin>>curr;
      if(curr == -1){
        neg_c++;
      }      
      else pos_c++;
      sum+=curr;
    }
    if(std::abs(sum)%4==0) std::cout<<"YES"<<std::endl;
    else std::cout<<"NO"<<std::endl;
  }
 

  return 0;
}
