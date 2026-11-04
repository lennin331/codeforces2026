//wrong answer - couldn't complete
#include<bits/stdc++.h>
int main(){
    int tt{}; std::cin>>tt;
    while(tt--){
        int n{}; std::cin>>n;
        std::vector<int> v(n);
        for(auto &x:v) std::cin>>x;
        int i = 0, mass{};
        long long sum{};
        bool morethanequal2 = false;
        while(i<n){
            sum += v[i];
            if(v[i]>=2) morethanequal2 = true;
            i++;
        }
        if(sum==n){
            std::cout<<-1<<std::endl;
            continue;   
        } else {
        if(morethanequal2){
            std::cout<<(sum-1)<<std::endl;
            continue;
        }
        if(v[0]>=2 || v[n-1]>=2){
            std::cout<<sum-n+1<<std::endl;
            continue;
        }
        }
    }
    return 0;
}
