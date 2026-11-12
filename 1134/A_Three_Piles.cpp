#include<bits/stdc++.h>
int main(){
    int tt{}; std::cin>>tt;
    while(tt--){
        int a{}, b{}, c{};
        std::cin>>a>>b>>c;
        std::cout<<(std::abs((a-b)*(b-c)*(c-a))==2?"YES":"NO")<<"\n";
    }
    return 0;
}