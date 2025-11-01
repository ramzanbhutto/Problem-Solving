#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> intersect(vector<int>&, vector<int>&);
int main()
{
  int s1, s2;
  cout<<"Enter the size of first array: ";
  cin>>s1;
  vector<int> v1(s1);
  cout<<"Enter the elements of first array: ";
  for(int &n:v1)
    cin>>n;
  cout<<"Enter the size of second array: ";
  cin>>s2;
  vector<int> v2(s2);
  cout<<"Enter the elements of second array: ";
  for(int &n:v2)
    cin>>n;

  vector<int> res = intersect(v1, v2);
  cout<<"Intersection of the two arrays is: ";
  for(int n:res)
    cout<<n<<" ";

  cout<<endl;

  return 0;
}

vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
{
  unordered_map<int, int> m;
  vector<int> res;

  for(int n:nums1)
    m[n]++;
  
  for(int n:nums2)
  {
    if(m[n]>0)
    {
      res.push_back(n);
      m[n]--;
    }
  
  }
  return res;
}
