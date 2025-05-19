#include<iostream>
using namespace std;

class A{
private:
  int num;
public:
  A() {}
  A(int n) : num(n) {}

  A& operator+(int b){
    cout<<"obj+num called"<<endl;
    num +=b;
    return *this;
  }
  friend A operator+(int n, const A& a);
  friend ostream& operator<<(ostream& os, const A& a);
};

A operator+(int n, const A& a){
  cout<<"num+obj called"<<endl;
  A temp;
  temp.num= n + a.num;
  return temp;
}

ostream& operator<<(ostream& os, const A& a){
  os<<a.num;
  return os;
}

int main(){
  A a1;
  A a2(10);
 
  cout<<"a2: "<<a2<<endl;

  cout<<"a2+5: "<<a2+5<<endl;
  
  cout<<"5+a2: "<<5+a2<<endl;

  return 0;
}
