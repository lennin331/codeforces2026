#include<bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //will have 2 - sections 
    // helper power function 
    long long power(long long base, long long exp, long long mod){
        base %= mod;
        long long result = 1;
        while(exp>0){
             if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    return result;
}
        }
    }
    int t; cin>>t;
    while(t--){
        int n, m, r, c;
        cin>>n>>m>>r>>c;
        int total = n*m;
        int free_cells = total - ((n-r+1)*(m-c+1));
        cout<<power(2,free_cells, MOD)<<endl;
    }
    return 0;
}