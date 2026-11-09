#include<bits/stdc++.h>
int main(){
    int tt{};std::cin>>tt;
    while(tt--){
        int n{}, k{};
        std::cin>>n>>k;
        std::vector<int> a(n);
        int ea{}, eb{};
        for(auto &x: a) {
            std::cin>>x;
            if(x%2==0 || x==0){
                ea++;
            }
        }
        std::vector<int> b(n);
        for(auto &x: b) {
            std::cin>>x;
            if(x%2==0 || x==0){
                eb++;
            }
        }
        if(k%2==0){
        std::cout<<(ea<=eb?"YES":"NO")<<"\n";
        }
        else std::cout<<(eb<=ea?"YES":"NO")<<"\n";


    }
    return 0;
}