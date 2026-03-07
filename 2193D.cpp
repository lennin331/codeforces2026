#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // first line contains the test cases t
    // levels i
    // second line contains sword strength a1, a2, a3 .. a_i
    // third line contains monster strength b1, b2, b3 ... b_i
    // for some x - game level itetrating incrementally, any sowrd of strength<x cannot be considered.
    // if it make any sense :(
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> swords(n);
        vector<int> monsters(n);
        for(int x = 0; x<n ; x++) {cin>>x;}
        for(int y = 0; y<n; y++) {cin>>y;}
        sort(swords.begin(),swords.end());
        int best = 0;
        for(auto s : swords){
            int usable = 0;
            for(auto i : swords){
                if(i>=s){
                    usable++;
                }
            }
            int level = 0;
            int attacks = usable;
            for(auto j : monsters){
                if(attacks>=j){
                    attacks-=j;
                    level ++;
                } else break;
            }
            best = max(best, level*s);
        }
        cout<<best<<endl;
    }
    
    return 0;
}
// g++ -std=c++20 2193D.cpp -o 2193D && ./2193D  

//p.s - my iteration
//Not copied from any ai slop machine - hardcore biological neural production, but the above might be slightly inspired for them lol!
// int t; cin>>t;
//     while(t--){
//         int max_level=0;
//         int n; cin>>n;
//         vector<int> swords(n);
//         //vector<int> swords ={4,4,1,4,5,4};
//         vector<int> monsters(n);
//         //vector<int> monsters = {2,2,4,1,2,2};
//         vector<int> can_attack = {};
//         int can_attack_num = 0;//*
//         for(int x : swords){
//             cin>>x;          
//         }
//         for(int y : monsters){
//            cin>>y;           
//         }
//         sort(swords.begin(),swords.end());
//         for(int i=1; i<swords.size(); i++){
//            for(int j =0; j<swords.size(); j++){
//                 if(i<=swords[j]) {
//                     can_attack_num++;
//                     can_attack.push_back(j);
//                 }
//                 if(can_attack.size()>max_level){
//                     max_level=can_attack.size();
//                 }
//                 can_attack.clear();
//             }
//         }
//         int defeated = 0;
//         while(can_attack_num>0){
//             for(int m : monsters){
//                 if((can_attack_num-m)>=0){
//                     defeated++;
//                 };
//                 can_attack_num-m;
//             }
            
//         }
//         cout<<defeated*max_level<<endl;   
//     }