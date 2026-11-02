#include<bits/stdc++.h>
#define ll long long
#define f(v) for(auto&x:v) 
int main(){
    int tt{}; std::cin>>tt;
    while(tt--){
        int n{}; std::cin>>n;
        std::vector<ll> v(n);
        f(v)std::cin>>x;
        //return cost and make_equal
        ll cost{}, make_equal{};
        ll mx=INT_MIN, mn=INT_MAX;
        f(v){
            if(mx<x) mx = x;
            if(mn>x) mn = x;
        }
        //std::sort(v.begin(), v.end());
        //ll mid = v[(v.size()-1)/2];
        std::ranges::nth_element(v, v.begin()+n/2);
        f(v) cost += std::abs(x-v[n/2]);
        std::cout<<cost<<" "<<(mx-mn)<<"\n";
    }
    return 0;
}