#include<bits/stdc++.h>
int main(){

    int tt{}; std::cin>>tt;
    while(tt--){
        int a{}, b{};
        std::cin>>a>>b;
        //no. of cheese > no. of sausage 
        if(b>=a) std::cout<<-1<<"\n";
        else std::cout<<std::min(b,a-b)<<"\n";
    }
    return 0;
}