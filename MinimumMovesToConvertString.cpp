#include<iostream>
using namespace std;

int minimumMoves(string s){
  int moves=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='X'){
      moves++;
      i+=2; // Skip the next two characters
    }
  }

  return moves;
}

int main(){
  string str;
  cout<<"Enter the string in X and O format like XXXX or OXOXX: ";
  cin>>str;

  cout<<"Minimum moves required to convert the string: "<<minimumMoves(str)<<endl;

  return 0;
}
