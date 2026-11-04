#include<bits/stdc++.h>
int main(){
    int tt{};std::cin>>tt;
    //if contains 0 then d-1
    while(tt--){
        int l{}, r{};
        std::cin>>l>>r; 
        int d{};  
        while(l<=r){
            if(l<0) d++;
            if(l>0) d--;
            l++;
        }
        if(d==0)std::cout<<std::abs(d)<<"\n";
        else std::cout<<std::abs(d)-1<<"\n";
    }
}