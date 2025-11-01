#include<iostream>
#include<vector>
using namespace std;
vector<int> decode(vector<int>& ,int);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> encoded(size);
  cout<<"Enter the elements of encoded array: ";
  for(int &v:encoded)
    cin>>v;
  int first;
  cout<<"Enter the first element of the array that will be decoded: ";
  cin>>first;
  vector<int> decoded=decode(encoded,first);
  cout<<"Decoded array: ";
  for(int &v:decoded)
    cout<<v<<" ";

  cout<<endl;

  return 0;
}

vector<int> decode(vector<int>& encoded,int first)
{
  vector<int> decoded(encoded.size()+1);
  decoded[0]=first;

  for(int i=0;i<encoded.size();i++)
  {
    decoded[i+1]=decoded[i]^encoded[i];
  }

  return decoded;
}
