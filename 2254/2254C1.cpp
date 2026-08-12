#include<bits/stdc++.h>
int main(){
  int tt {};std::cin>>tt;
  while(tt--){
    int n {}; std::cin>>n;
    std::string a, b;
    std::cin>>a>>b;
    //the numbers at the odds place is the same through out
    //os if the numbers at the odds place are the same then it cam be rearranged 
    int cha[2] = {}; int chb[2] = {};
    for(int i=0; i<n; i++){
      cha[i%2] += a[i] == '1';
      chb[i%2] += b[i] == '1';

    }
    //cha = {_, _}
    //chb = {_, _} all the odd place are at 1 and even at 0
    //How is this different ? - you don't have to declare 4 ints spearately for all the places of a and b
    //one can skip 2 zeros at a time and vice versa
    if(cha[0] == chb[0] && cha[1] == chb[1]) std::cout<<"YES"<<std::endl;
    else std::cout<<"NO"<<std::endl;
  }
  return 0;
}
