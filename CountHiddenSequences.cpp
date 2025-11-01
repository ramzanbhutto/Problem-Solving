#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int numberOfArrays(vector<int>& ,int, int);
int main()
{
  int s;
  cout<<"Enter size: ";
  cin>>s;
  vector<int> vec(s);
  cout<<"Enter elements: ";
  for(int &v:vec)
  cin>>v;
  int lower;
  cout<<"Enter lower bound: ";
  cin>>lower;
  int upper;
  cout<<"Enter upper bound: ";
  cin>>upper;
  cout<<"The number of hidden sequences is: "<<numberOfArrays(vec, lower, upper)<<endl;

  return 0;
}

int numberOfArrays(vector<int>& diff,int l,int u){
  ll sum=0, MIN=0, MAX=0;
  for(int d:diff){
    sum+=d;
    MIN=min(MIN,sum);
    MAX=max(MAX,sum);
  }
  ll seq= (u-l) - (MAX-MIN) + 1;
  return max(0LL, seq);
}
