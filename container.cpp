#include<iostream>
using namespace std;
int maxArea(int[], int);
int main()
{
  int s;
  cout<<"Enter size of container: ";
  cin>>s;

  int container[s];
  cout<<"Enter height of container: ";
  for(int& i: container)
	  cin>>i;

  cout<<"The maximum area of containers with most water is: "<<maxArea(container,s)<<endl;

  return 0;
}
int maxArea(int height[], int size)
{
  int left=0;
  int right= size-1;
   int maxarea=0;


   while(left<right)
   {
      int curArea= min(height[left], height[right]) * (right-left);
      maxarea= max(maxarea,curArea);

      if(height[left]<height[right])
	      left++;

      else
	      right--;
   
   }


   return maxarea;

}
