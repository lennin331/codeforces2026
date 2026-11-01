#include<bits/stdc++.h>
int main(){
    int tt{}; std::cin>>tt;
    while(tt--){
        int n{}; std::cin>>n;
        std::vector<int> v(n);
        for(auto &x:v) std::cin>>x;
        int i = 1, mass{};
        auto sum = accumulate(v.begin(), v.end(),0);

        // while(i<n){
        //     v[i] += v[i-1]-1;
        //     std::cout<<v[i]<<"\n";
        //     i++;
        // }
        if(sum==n){
            std::cout<<-1<<"\n";
            
        } else {
        std::cout<<(sum)<<"\n";
        }
    }
    return 0;
}
/*
approach : -1 to the left and other to the right 
to avoid sorting - use the index of max and distance from max
1 2 3 4 
2 4 4 
3 7 
*/