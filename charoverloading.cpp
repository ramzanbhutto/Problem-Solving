#include<iostream>
#include<cstring>
using namespace std;

class A{
private:
  char *name;
public:
  A() : name(nullptr) {}
  A(const char *n){
    name= new char[strlen(n) + 1];
    strcpy(name, n);
  }
  A(const A &a){
    name= new char[strlen(a.name) + 1];
    strcpy(name, a.name);
  }

  A& operator=(const A &a){
    if(this == &a) return *this;
      
    delete[] name;
    name= new char[strlen(a.name) + 1];
    strcpy(name, a.name);
    return *this;
  }

  friend ostream& operator<<(ostream &os, const A &a){
    os<<"Name: "<<a.name<<endl;
    os<<"Address: "<<&a.name<<endl;
    return os;
  }

  ~A(){  delete[] name;  }
};

int main(){
  A a1("Ali");
  cout<<a1;

  A a2(a1);
  cout<<a2;

  A a3;
  a3=a1;
  cout<<a3;

  return 0;
}
