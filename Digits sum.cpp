#include<iostream>
class Solution{
private:
  int x;
public:
  void setter(){
    std::cin>>x;
    std::cout<<(x+1)/10<<std::endl;
}
};
int main(){
  int t;
  std::cin>>t;
  while(t--){
  Solution obj;
  obj.setter();
  }
  return 0;
}

