#include<bits/stdc++.h>
int main(){
    int tt{};
    std::cin>>tt;
    while(tt--){
        int x{}, y{}, z{}; std::cin>>x>>y>>z;
        //x - rock - 1
        //y - sissors - 1 
        //z - paper - 2
        std::string res;
        int n = x+y+z;
        res=y>=z?"R":z>=x?"S":"P";
        for(int i=0; i<n; i++){
        std::cout<<res<<"";
        }
        std::cout<<"\n";
    }
    return 0;
}