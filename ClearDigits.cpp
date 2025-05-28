#include<iostream>
using namespace std;

string clearDigits(const string& str) {
  
  string stack="";
  for(char ch:str){

    if(isdigit(ch)){
      if(!stack.empty()) stack.pop_back(); 
    }
    else stack.push_back(ch);
  }

  return stack;
}

int main(){
  string input;
  cout<<"Enter a string: ";
  cin>>input;

  cout<<"String after clearing digits: "<<clearDigits(input)<<endl;

  return 0;
}
