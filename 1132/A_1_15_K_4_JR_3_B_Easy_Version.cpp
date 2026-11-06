#include<bits/stdc++.h>
int main(){
    int tt{}; std::cin>>tt;
    while(tt--){
        long long n{};
        std::cin>>n;

        std::cout<<(n/2)*(n-n/2)<<"\n";
    }
    return 0;
}