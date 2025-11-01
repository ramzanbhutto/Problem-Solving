#include<iostream>
using namespace std;

class Complex{
private:
  int real;
  int imag;
  int *n;
public:
  Complex() : real(0), imag(0), n(nullptr) {}
  Complex(int *n){
   this->n= new int;
    *this->n= *n;
    real=0, imag=0;
  }
  Complex(int r, int i) : real(r), imag(i), n(nullptr) {}
  Complex(const Complex &c) : real(c.real), imag(c.imag), n(nullptr){ /* deep copy for different memory locations, for safety purpose and some random inputs like the Complex c8=c2; */
    cout<<"Deep Copy constructor called."<<endl;
    if(c.n){ //check if the pointer is not null
      n= new int;
      *n= *c.n;
    }
    else n=nullptr;
  }

  Complex& operator=(const Complex &c){
    cout<<"Simple Assignment operator called."<<endl;
    if(this == &c) return *this;
    this->real= c.real;
    this->imag= c.imag; 

    if(n) delete n; //check if the old pointer is not null and, delete it
    if(c.n){ 
      n= new int;
      *n= *c.n;
    }
    else n=nullptr;

    return *this;
  }
  Complex& operator=(const Complex *c){
    cout<<"Pointer Assignment operator called."<<endl;
    if(this == c) return *this;

    this->real= c->real;
    this->imag= c->imag;

    if(n) delete n;
    if(c->n) n=new int(*c->n);
    else n=nullptr;
     
    return *this;
  }
  bool operator!(){
    cout<<"Logical NOT operator called."<<endl;
    return real==0 && imag==0;
  }
 
    void display() const{
    cout<<real<<" + "<<imag<<"i"<<endl;
  }
  void displayPointer() const{
    if(n) cout<<*n<<endl;
    else cout<<"Pointer is null."<<endl;
  }

  ~Complex(){
    cout<<"Destructor called."<<endl;
    if(n) delete n; 
  }

};

int main(){
  Complex c1(7,8);
  Complex c2(9,10);
  cout<<"c1-> ";
  c1.display();
  cout<<"Before assignment, c2-> ";
  c2.display();

  cout<<"self assignment, c1-> ";
  c1=c1;
  c1.display();

  c2=c1;
  cout<<"After first assignment, c2-> ";
  c2.display();
 
  Complex c4;
  c4=c1=c2;
  cout<<"After chained assignment, c4-> ";
  c4.display();
 
  Complex c3(0,0);
  cout<<"c3-> ";
  c3.display();
  c2=c3;
  cout<<"After second assignment, c2-> ";
  c2.display(); 

  if(!c2) cout<<"c2 is zero."<<endl;
  else cout<<"c2 is not zero."<<endl;

  c1=Complex(1,2);  // temporary object assignment and it will be destroyed after use immediately
  cout<<"Overwriting c1 with new values: ";
  c1.display();


   int *n= new int(3);
   Complex c5(n);
   cout<<"c5-> ";
   c5.displayPointer();
   
   Complex *c6=&c5;
   cout<<"c6-> ";
   c6->displayPointer();
   Complex c7;
   c7= c6;
   cout<<"c7-> ";
   c7.displayPointer();

   Complex c8= c2; // calls deep copy constructor
   cout<<"c8-> ";
   c8.display();

  delete n;

  return 0;
}
