#include<bits/stdc++.h>
// #include<vector>
int main(){
  // n - length of the array a
  // m - number which sub array is divisible of
  // k - remainder number

  //condition to hold => r -l + 1 = k
  //order - n, k, m 
  
  //check if the condition satisfies
  //print a valid sub array
  int t {}; std::cin>>t;
  while(t--){
    int n {}, k {}, m {};
    // std::vector<int> v(n);
    std::cin>>n>>k>>m;
    // 5 3 5
    if(k>m){
      std::cout<<"NO \n"<<std::endl; 
      continue;
    }
    std::cout<<"YES \n"<<std::endl;
    for(int i=0; i<n; i++){
      std::cout<<(i%k ==0 ? m-k+1 : 1)<<" ";
    }
    std::cout<<"\n";
    
  }
  return 0;
}
