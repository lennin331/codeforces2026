// Hot potato at the fairy warehouse
#include<bits/stdc++.h>

// 1 - 2n leprechauns :  blue team -  even place, red team - odd place
// leprechauns keep : it is 1 before the end of the round (pass it at the last round) and nothing is blocking the passing (next lep doesnt have a potato)
// 101110 
// 1_1_1_
// _0_1_0

int main()
{
   int tt{};std::cin>>tt;
  while(tt--){
    long long n {}, k{};
    std::cin>>n>>k;
    std::string pos;std::cin>>pos;
    long long  blue{}, red{};
    for(int i=0; i<2*n; i++){
      if(pos[i]== '1' && pos[(i+1) % (2*n)] == '0'){
        if(i%2) blue++;
        else red++;

      }
      if(pos[i]== '1' && pos[(i+1) % (2*n)] == '1'){
        if(i%2) red++;
        else blue++;

      }
    
    } 
        std::cout<<red<<" "<<blue<<"\n";
  }

}
