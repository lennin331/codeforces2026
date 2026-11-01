#include<bits/stdc++.h>
int main(){
    int tt{};
    std::cin>>tt;
    while(tt--){
        int n{}, m{};
        std::string p{}, q{};
        std::cin>>n>>m>>p>>q;
        q+="six";
        std::sort(p.begin(), p.end());
        std::sort(q.begin(), q.end());
        if(p==q) std::cout<<"YES"<<"\n";
        else std::cout<<"NO"<<"\n";
        
    }
    return 0;
}