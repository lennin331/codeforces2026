#include<iostream>
#include<vector>
//#include<array>
using namespace std;
int main(){
    int t;
    int count;
    bool repeat = false;
    cin>>t;

    while(t--){
        int n; cin>>n;
        //int a = new int[n];
        //array<int, n> a = {};
        vector<int> a ;
        for(int i = 0; i<n; i++){
            int x ; cin>>x;
            a.push_back(x);
        }
        for(int j=1; j<=n; j++){
            for(int k=0; k<a.size(); k++){
                for(int l=0; l<a.size(); l++){
                    if(a[k]==a[l]) repeat = true;
                    if(a[k]*a[l]==j){
                        count++;
                    } else cout<<-1<<" "<<endl;
                }
            if (repeat == true ) count ++;
            cout<<count<<endl;
            }
            repeat = false;
        }



    }
    return 0 ;
}