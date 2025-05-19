#include<iostream>
using namespace std;

class A{
private:
  int a,b;
public:
  A() : a(0), b(0) {}
  A(int x, int y) : a(x), b(y) {}
  
  A& operator++(){
    a++;
    b++;
    return *this;
  }
  A operator++(int){
    A temp = *this;
    a++;
    b++;
    return temp;
  }
  A& operator-(){
    a*=-1;
    b*=-1;
    return *this;
  }
  bool operator!(){
    return (a == 0  &&  b == 0);
  }
  bool operator<(const A& obj){
    return (a < obj.a  &&  b < obj.b);
  }
  friend ostream& operator<<(ostream& os, const A& obj){
    os<<"a: "<<obj.a<< ", b: "<<obj.b;
    return os;
  }
};

int main(){
  A x;
  A y(1,2);
  cout<<"x++ : "<<x++<<endl;
  cout<<"++x : "<<++x<<endl;

  cout<<"y++ : "<<y++<<endl;
  cout<<"++y : "<<++y<<endl;

  cout<<"-x : "<<-x<<endl;
  
  cout<<"-y : "<<-y<<endl;

  if(!x) cout<<"x is zero"<<endl;
  else cout<<"x is not zero"<<endl;

  if(x<y) cout<<"x is less than y"<<endl;
  else cout<<"x is not less than y"<<endl;

  return 0;
}
