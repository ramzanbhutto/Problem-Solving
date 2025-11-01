#include<iostream>
#include<vector>
using namespace std;
vector<int> minOperations(string);
int main()
{
  string boxes;
  cout<<"Enter the boxes in form of '0' and '1': ";
  cin>>boxes;

  vector<int> result = minOperations(boxes);
  cout<<"Minimum number of operations to move all balls to each box: ";
  for(int i:result) cout<<i<<" ";
  cout<<endl;

  return 0;
}

vector<int> minOperations(string s){
  int box= s.length();
  vector<int> operations(box,0);
  int count=0;
  
  for(int i=1;i<box;i++){
    if(s[i-1]=='1') count++;

    operations[i] = operations[i-1] + count;
  }

  count=0;  //resetting
  int operationsSum=0; 

  for(int i=box-2; i>=0; i--){
    if(s[i+1]=='1') count++;

    operationsSum+= count;
    operations[i] += operationsSum;
  }

  return operations;
}
