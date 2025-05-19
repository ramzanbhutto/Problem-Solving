#include<iostream>
#include<cstring>
using namespace std;

class Student{
public:
  char* name;
  int age;

  int getlength(const char* str){
    int length=0;
    while(str[length]!='\0'){
      length++;
    }
    return length;
  }

  Student(const char* Name,int Age){
  
    int len =getlength(Name);
    
    name=new char[len+1];
    for(int i=0;i<len;i++){
      name[i]=Name[i];
    }
    name[len]='\0';
    age=Age;
  
  }

  Student(const Student &s){

    int len=getlength(s.name);
    
    name=new char[len+1];
    for(int i=0;i<len;i++){
      name[i]=s.name[i];
    }
    name[len]='\0';
    age=s.age;
  
  }

  void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Address: "<<&name<<endl<<endl;
  }

  ~Student(){
    delete[] name;
    name=NULL;
  }

};

int main()
{
  Student s1("Ali",10);
  Student s2(s1);
  
  cout<<"Parameterized Constructor"<<endl;
  s1.display();

  cout<<"Deep Copy Constructor"<<endl;
  s2.display();

  return 0;
}

