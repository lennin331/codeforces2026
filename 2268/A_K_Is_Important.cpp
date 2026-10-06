#include<bits/stdc++.h>
/*
- given an array and k, remove k or n-k+1 and add it score to maximize
- remove the element by changing them to -1 and adding a if condition
- k is indexed a 1 but the vector is at 0
6 3
1 4 8 2 6 3
*/
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int tt{};
    std::cin>>tt;
    while(tt--){
        int n{}, k{};
        std::cin>>n>>k;
        long long s{};
        std::vector<int> v(n,0);
        for(auto& x: v) std::cin>>x;
        while(n>=k){
            if(v[k-1]>=v[n-k]){
                s+=v[k-1];
                std::swap(v[k-1], v.back());
                v.pop_back();
            } else {
                s+=v[n-k];
                std::swap(v[n-k], v.back());
                v.pop_back();  
            }
            n--;
        }
        std::cout<<s<<"\n";
    }
}