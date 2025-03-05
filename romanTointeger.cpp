#include<iostream>
#include<unordered_map>
using namespace std;
int romantoInt(string);
int main()
{
  string roman;
  cout<<"Enter the roman number: ";
  cin>>roman;

  cout<<"The integer value of the roman number is: "<<romantoInt(roman)<<endl;
  return 0;
}
int romantoInt(string s) {
 
  unordered_map<char,int> map{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
  
  int num=0;
  
  for(int i=0;i<s.size();i++){
   if(i+1<s.size() && map[s[i]]<map[s[i+1]])
     num-=map[s[i]];

   else
    num+=map[s[i]];  
  } 

  return num;
}
