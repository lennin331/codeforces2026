#include<bits/stdc++.h>
int main(){
    int tt{}; std::cin>>tt;
    while(tt--){
        int res{};
        int n{}; std::string s;
        std::cin>>n>>s;
        for(int i=0; i<n; i++){
            if(i%2==0){ // red here
                if(s[i]!='R') res++;
            } else {
                if(s[i]!='B') res++;
            }
        }
        std::cout<<res<<"\n";
    }
    return 0;
}