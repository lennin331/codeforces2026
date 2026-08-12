#include<bits/stdc++.h>
void func(){
  std::cout<<"This is printed from inside the thread!!"<<std::endl;

}
int main(){
  std::thread t (func);
  t.join();
  std::cout<<"The thread on the main is done!!"<<std::endl;
  return 0;
}
