#include<iostream>
using namespace std;
bool checkRecord(string );
int main()
{
  string str;
  cout<<"Enter the attendace of student; A for present, L for late and P for absent in the format like AALAP: ";
  cin>>str;

  if(checkRecord(str))
    cout<<"Yes, the student is eligible for the award."<<endl;
  else
    cout<<"No, the student is not eligible for the award."<<endl;

  return 0;
}

bool checkRecord(string s){
  int l=0, a=0;
  
  for(char c: s){
    if(c== 'A') a++;
    if(c== 'L'){
      l++;
      if(l>=3) return false;
    }
    else l=0;
  }

  return a<2 && l<3;
}
