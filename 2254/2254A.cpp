#include<bits/stdc++.h>
using namespace std;
int main(){
  int tt {};
  cin>>tt;
  while(tt--){
    int a {}, b {}, c {} ;
    cin>>a>>b>>c;
    if (a!= b && b!=c && c!=a) {
      cout<<min({abs(a-b),abs(a-c), abs(b-c)})<<endl;
    }
    else cout<<0<<endl;
  }

    return 0;
}
