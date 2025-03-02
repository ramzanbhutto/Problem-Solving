#include<iostream>
#include<vector>
using namespace std;
int trappedWater(vector<int>&);
int main()
{
   int size;
   cout<<"Size: "; 
  cin>>size;
  vector<int> vec(size);
  cout<<"Enter heights of bar: ";
  for(int&i:vec)
    cin>>i;
  cout<<"Trapped water is: "<<trappedWater(vec)<<endl;


  return 0;
}
int trappedWater(vector<int>&height)
{
  int left=0, right=height.size()-1, water=0;
  int leftmax=height[left], rightmax= height[right];

  while(left<right){
   
    if(height[left]<height[right]){
      leftmax= max(leftmax, height[left]);
      water+= leftmax-height[left];
      left++;
    }

    else{
      rightmax= max(rightmax, height[right]);
      water+= rightmax- height[right];
      right--;
    }

  }

  return water;
}
