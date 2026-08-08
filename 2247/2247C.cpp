#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
  //binary array a and b 
  //select a subsequece of the range k, invert all the elements 
  //obtain b from a 
  //
  //return the minimum operation to obtain b
  int t {}; cin>>t;
  while(t--){
    int n {}; cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
      int temp {}; cin>>temp;
      a.push_back(temp);
    }
    for(int i=0; i<n; i++){
      int temp {}; cin>>temp;
      b.push_back(temp);
    }
    if(a==b){
      cout<<0<<endl;
      continue;
    }
    int ka = a[0];
    int kb = b[0];
    fr(int i=1; i<n; i++){
      ka+=a[i];
      kb+=b[i];
      if(ka%2!=0 && kb == (i - ka)){
        cout<<1<<endl;     
        continue;
      }
      if(accumulate(a.begin(), a.end(), 0) == 0 || accumulate(b.begin(), b.end(), 0) == n){
        cout<<-1<<endl;
        continue;
      }
      else{
        cout<<2<<endl;
      }
        }


  } 
}
