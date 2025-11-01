#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<int> frequencySort(vector<int>& );
int main()
{
  int n;
  cout<<"Size: ";
  cin>>n;

  vector<int> vec(n);
  cout<<"Elements: ";
  for(int &i:vec)
    cin>>i;

  vector<int> ans = frequencySort(vec);
  cout<<"Sorted by frequency: ";
  for(int i:ans)
    cout<<i<<" ";
  cout<<endl;

  return 0;
}

vector<int> frequencySort(vector<int>& nums){
  unordered_map<int,int> map;
  for(int i:nums)
    map[i]++;

  sort(nums.begin(),nums.end(),[&map](int a,int b){
    if(map[a]==map[b]) 
      return a>b;   /* if frequency is same, sort in decreasing order */
    return map[a]<map[b];   /* sort in increasing order of frequency */
  });

  return nums;
}
