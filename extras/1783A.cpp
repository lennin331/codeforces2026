#include<bits/stdc++.h>
int main(){
  int tt{};std::cin>>tt;
  while(tt--){
    int n{};std::cin>>n;
    std::vector<int> v(n);
    std::set<int> s;int a =0;
   for(int i=0; i<n; i++){
     std::cin>>a;
     s.insert(a);
     v.push_back(a);
   }
    if(s.size() == 1) std::cout<<"NO"<<std::endl;

    else{
       std::cout<<"YES"<<std::endl;
       sort(v.rbegin(), v.rend());
       for(auto a: v)  std::cout<<a<<" ";
      std::cout<<"\n";
    }
  }
}
