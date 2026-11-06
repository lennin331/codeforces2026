#include<bits/stdc++.h>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int tt{}; std::cin>>tt;
    while(tt--){
        int n{}, k{};
        std::cin>>n>>k;
        std::vector<long long> dono(n);
        for(auto& x: dono) std::cin>>x;
        
        std::sort(dono.begin(), dono.end());
        std::vector<long long> res = dono;        
        int ok = 1; long long sum{};
        for(int i=n-k; i<n; i++){
            if(res[i]>=sum) ok++;
            else ok--;
            sum+=res[i];
        }
        if(ok>=k){
            std::cout<<"YES"<<"\n";
            for(auto x: res) std::cout<<x<<" ";
            std::cout<<"\n";
        } 
        else{
            std::cout<<"NO"<<"\n";
        }
    }
}