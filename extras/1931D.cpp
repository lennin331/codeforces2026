#include<bits/stdc++.h>

//x = a[i] + a[j];
//y = a[i] - a[j];
//approach : using 2 for loops over all combinations of pairs - o(n²)
//follow 2 vectors 
//1 2 7 4 9 6  
//:
//x = 5 y = 2

//takeaway - operator precedence bug - "+" is considered before "%" 
int main(){
  long long tt = 0; std::cin>>tt;
  while(tt--){
    long long n {}, x{}, y{};
    std::cin>>n>>x>>y;
    std::vector<long long> v(n);
    for(auto& a: v) std::cin>>a;
    long long res = 0;
    std::map<std::pair<long long, long long>, long long> freq;
    for(long long i=0 ;i<n ;i++){
      long long current_x = v[i] % x;
      long long current_y = v[i] % y;
      long long needed_x = (x - current_x) % x;
      long long needed_y = current_y;
      res+= freq[{needed_x, needed_y}];
      freq[{current_x, current_y}]++;

    }

    std::cout<<res<<std::endl;
  }
  return 0;
}
