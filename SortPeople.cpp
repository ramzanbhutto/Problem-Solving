#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> sortPeople(vector<string>&, vector<int>&);
int main()
{
  int n;
  cout<<"Enter total number of people: ";
  cin>>n;
  
  vector<string> names(n);
  cout<<"Enter their names: ";
  for(string &s:names)
    cin>>s;
  
  vector<int>heights(n);
  cout<<"Enter their heights: ";
  for(int &i:heights)
   cin>>i;

  vector<string> sorted=sortPeople(names, heights);
  cout<<"Sorted people by height: ";
  for(string &s:sorted)
    cout<<s<<" ";
  cout<<endl;

  return 0;
}

vector<string> sortPeople(vector<string>& s, vector<int>& n){
  vector<pair<int, string>> v;
  for(int i=0; i<n.size(); i++)
    v.push_back({n[i], s[i]});
  
  sort(v.begin(), v.end(), greater<pair<int, string>>());
  
  for(int i=0; i<n.size(); i++)
    s[i]=v[i].second;

 return s;
 
  /*  or  
  vector<int> indices(n.size());
  for(int i=0;i<n.size();i++)
    indices[i]= i;

  sort(indices.begin(),indices.end(),[&n](int a,int b){
    return n[a]>n[b];       // sorting indices on basis of height 
  });

  vector<string> res;
  for(int i:indices)
    res.push_back(s[i]);

 return res;
*/  
}
