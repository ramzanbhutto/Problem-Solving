#include<iostream>
using namespace std;

int maxDepth(string );
int main()
{
  string str;
  cout<<"Enter a string like ((1+(2*3))+((8)/4)) : ";
  cin>>str;

  cout<<"Maximum Depth of Parentheses is : "<<maxDepth(str)<<endl;

  return 0;
}

int maxDepth(string s){
  int maxe=0, curr=0;
  for(char c: s){
    if(c=='('){
      curr++;
      curr>maxe ? maxe=curr : maxe;
     }
    else if(c==')') curr--;
  }

  return maxe;
}
