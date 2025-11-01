#include<iostream>
#include<vector>
using namespace std;
vector<int> findPeaks(vector<int> &);
int main()
{
  int size;
  cout<<"Enter the size of the array: ";
  cin>>size;
  vector<int> arr(size);
  cout<<"Enter the elements of the array: ";
  for(int &x: arr)
    cin>>x;

  vector<int> peaks = findPeaks(arr);
  cout<<"Peaks in the array are: ";
  for(int &x: peaks)
    cout<<x<<" ";

  cout<<endl;
  return 0;
}

vector<int> findPeaks(vector<int> &mountain)
{
  vector<int> peaks;
  for(int i=1; i<mountain.size()-1; i++)
  {
    if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1])
      peaks.push_back(mountain[i]);
  }
  return peaks;
}
