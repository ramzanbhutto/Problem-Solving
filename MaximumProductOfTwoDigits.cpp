#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProduct(int n){
  vector<int> res;
  while(n>0){
    res.push_back(n%10);
    n/=10;
  }
  sort(res.begin(),res.end(),greater<int>());

  return res[0]*res[1];
}

int main(){
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  
  cout<<"Maximum Product of Two Digits in this number is: "<<maxProduct(num)<<endl;

  return 0;
}
