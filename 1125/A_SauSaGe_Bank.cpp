#include<bits/stdc++.h>
int main(){
    int tt{};
    std::cin>>tt;

    while(tt--){
        int k{}, n{};
        std::cin>>n>>k;
        //1 at the start followed by filling in reverse from the back
        int res=1;
        int last = n-k+1;
        for(int i=0; i<last; i++){
            res*=2;

        }   
        std::cout<<res+2*(k-1)<<"\n";
    }
    return 0;

}

// 1 1 1 1 
// 1 2 4 2