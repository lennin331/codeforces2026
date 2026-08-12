#include<bits/stdc++.h>
#include<algorithm>
void solve(){
  //wkt, the odd palces and the even places have a seperate thing going on
  //consider 110000 -> 000011
  //1_1_0_0 -> 0_0_1_1
  //_1_0_0 -> _0_0_1 find the possible transitions b/w these 
  // distance 2 + 2 = 4
  int n{}; std::cin>>n;
  std::string a, b;
  std::cin>>a >> b;
  std::vector<int> skip = {};
  int ok = 1; long long res = 0;
  //find a way to loop through the strings in odd(1) and even(1) 
  for(int k=0; k<2; k++){
    //k can be 0 and 1 in this iteration, intializing the starting point
    std::vector<int> ap, bp;
    for(int i=k; i<n; i+=2){
      if(a[i]=='1') ap.push_back(i);
      if(b[i]=='1') bp.push_back(i);
    }
    if(ap.size()!=bp.size()){
      ok = 0;
      break;
    }
    for(int i=0; i<ap.size(); i++){
      res += std::abs(ap[i] - bp[i]);
    }
    
  }
  if(ok)std::cout<<res/2<<std::endl;
  else std::cout<<-1<<std::endl;

}

int main(){
  std::ios_base::sync_with_stdio(0);
  
  int tt{};
  std::cin>>tt;
  while(tt--){
    solve();
  }
  return 0;
}
