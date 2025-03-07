#include<iostream>
#include<vector>
using namespace std;

vector<string> fizzBuzz(int );
int main()
{
  int size;
  cout<<"Size of fizzBuzz vector: ";
  cin>>size;
  vector<string> result = fizzBuzz(size);
  for(auto i:result)
    cout<<i<<" ";
  cout<<endl;

  return 0;
}
vector<string> fizzBuzz(int n) {
        
   vector<string> res;
  for(int i=1;i<=n;i++){
    if(i%3==0 && i%5==0)
      res.push_back("FizzBuzz");
    else if(i%3==0)
      res.push_back("Fizz");
    else if(i%5==0)
      res.push_back("Buzz");
    else
      res.push_back(to_string(i));   
   }
   
  return res;
}
