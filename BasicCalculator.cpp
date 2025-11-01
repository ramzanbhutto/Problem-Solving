#include<iostream>
#include<vector>
using namespace std;

int calculate(string);
int main()
{
  string str;
  cout<<"Enter the expression: ";
  getline(cin, str);
  cout<<"Result is: "<<calculate(str)<<endl;

  return 0;
}

int calculate(string s)
{
  vector<int> sumStack;
  vector<int> signStack;
  int sum=0,num=0,sign=1;

  for(int i=0;i<s.length();i++){
    char ch=s[i];

    if(ch>='0' && ch<='9')
    {
      num=0;
       while(i<s.length() && s[i]>='0' && s[i]<='9')
       {
         num=num*10+(s[i]-'0');
         i++;
       }
      i--;
      sum+= sign*num;
    }
    else if(ch=='+')
      sign=1;
    else if(ch=='-')
        sign=-1;
    else if(ch=='('){
      sumStack.push_back(sum);
      signStack.push_back(sign);
      
      sum=0;
      sign=1;
    }
    else if(ch==')'){
      sum*=signStack.back();    
      signStack.pop_back();

      sum+=sumStack.back();
      sumStack.pop_back();
    }
  }

  return sum;
}
