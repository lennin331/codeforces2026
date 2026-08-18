#include <algorithm>
#include<bits/stdc++.h>
// n zeros in a array
// (a) range l and r - increment a++ on all the numbers between 
// (b) after n actions if it possible to reorder to make a = b
//  return r - l + 1 to make max max
//  
//  0 5 1 0 1 
//  we can make retrun to be max keeping b in ascending order

int main(){
  int tt = 0; std::cin>>tt;
  while(tt--){
    int n = 0; std::cin>>n;
    int res = 0;
    std::vector<int> a(n);
  //   std::vector<int> diff;
    for(auto & x: a) std::cin>>x;
    sort(a.begin(), a.end());
  //    // for(int i=0; i<n; i++){
  //   //   if(a[i>0])
  //   // }
  //   int mx = 0, mn = 20001;
  //   int index = 0;
  //   //finding the max 
  //   for(int i=0; i<n; i++){
  //     mx = std::max(mx, a[i]);
  //     mn = std::min(mn, a[i]);
  //   }
  // }
  for(int i=0; i<n; i++){
    if(a[i] != 0){
      res = n - i + 2;
    }
  }
  if(a[0] == a[n-1]){
    std::cout<<1<<"\n";
    break;
  }
  std::cout<<res<<"\n";
}

  return 0;
}
