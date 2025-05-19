#include<iostream>
using namespace std;

class A{
private:
  int a[3];
public:
  A() : a{0,0,0} {}
  A(int *arr){
    a[0] = arr[0];
    a[1] = arr[1];
    a[2] = arr[2];
  }

  int& operator[](int i){
    if(i<0 || i>2){
      throw out_of_range("Index out of bounds");
      exit(1);
    }
    return a[i];
  }
  const int& operator[](int i) const {
    if(i<0 || i>2){
      throw out_of_range("Index out of bounds");
      exit(1);
    }
    return a[i];
  }
  friend ostream& operator<<(ostream &os, const A &obj){
    os<<"A: "<<obj.a[0]<<", "<<obj.a[1]<<", "<<obj.a[2];
    return os;
  }
}; 

int main(){
  int arr[3]= {1,2,3};
  A obj(arr);

  cout<<"obj: "<<obj<<endl;

  cout<<"obj[0]: "<<obj[0]<<endl;
  cout<<"obj[1]: "<<obj[1]<<endl;
  cout<<"obj[2]: "<<obj[2]<<endl;
  
  obj[1] = 10;
  cout<<"obj[1]: "<<obj[1]<<endl;

  cout<<"obj: "<<obj<<endl;
return 0;
}
