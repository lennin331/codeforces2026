#include<bits/stdc++.h>
using namespace std;
inline bool isGoodNum(int n){
        set<int> digitCounter;
        while(n>0){
            int lastDigit = n % 10;
            digitCounter.insert(lastDigit);
            n/=10;
        } 
        if(digitCounter.size() <= 2){
            return true;
        }
        return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        //find y - good number
        //find x*y - good number
        //good if - atmost 2 distinct numbers
        //its give - fs - x is a good number
        //get the smallest possible good number within y.
        //looping thorugh y
        int x = 0;cin>>x;
        for(int i=2; i<x; i++){
            long long y = x * i;
            if(isGoodNum(i) && isGoodNum(y)){
                cout<<i<<endl;
                break;
            }
        }


    }

    return 0;
}