#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

string sortDigits(int n){
  string s= to_string(n);
  sort(s.begin(), s.end());
  return s;
}

bool BitManipulation(int n){
  string target= sortDigits(n);
  for(int i=0; i<31; i++){
    int power= 1<<i;
    if(sortDigits(power)==target) return true;
  }

  return false;
}

bool Permutation(int n){
  string s= to_string(n);
  sort(s.begin(), s.end());
  do{
    if(s[0]=='0') continue;
    int num= stoi(s);
    if((num & (num-1))==0) return true;
  }while(next_permutation(s.begin(), s.end()));

  return false;
}

int main(){
  int num;
  cout<<"Enter the number: ";
  cin>>num;

  if(Permutation(num)) cout<<"We CAN reorder the digits of "<<num<<" to get a power of 2."<<endl;
  else cout<<"We CANNOT reorder the digits of "<<num<<" to get a power of 2."<<endl;

  if(BitManipulation(num)) cout<<"We CAN reorder the digits of "<<num<<" to get a power of 2."<<endl;
  else cout<<"We CANNOT reorder the digits of "<<num<<" to get a power of 2."<<endl;

  return 0;
}
