#include<bits/stdc++.h>
int main(){
    int tt{}; std::cin>>tt;
    while(tt--){
        int n{}; std::cin>>n;
        int res{};
        std::set<int> s;
        std::vector<int> v(n);
        for(auto & x:v) std::cin>>x;
        std::sort(v.begin(), v.end());
        for(int i=0; i<n; i++){
            int m{};
            for(int j=i;j<n; j++){
                if(v[j]%v[i]==0){
                    m++;
                }
            }
            res = std::max(m, res);
        }
        std::cout<<n-res<<"\n";
    }
    return 0;
}