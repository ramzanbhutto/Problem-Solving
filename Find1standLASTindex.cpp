#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>&,int);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> vec(size);
  cout<<"Enter elements: ";
  for(int&v:vec)
    cin>>v;

  int target;
  cout<<"Target: ";
  cin>>target;

  vector<int> position=searchRange(vec,target);
  cout<<"Indices: "<<"["<<position[0]<<","<<position[1]<<"]"<<endl;

  return 0;
}
 vector<int> searchRange(vector<int>& vec, int target) {
        
        int left=0,right=vec.size()-1;
         int i1=0,i2=0;
        while(left<=right){
            int mid=left+(right-left)/2;

            if(vec[mid]==target){
             int start=mid,end=mid;

             while(start>=0 && vec[start]==target)
              start--;

             i1=start+1;

             while(end<=vec.size()-1 && vec[end]==target)
              end++;

             i2= end-1;

              return {i1,i2};
            }

             else if(vec[mid]>target)
             right=mid-1;
              else
             left=mid+1;
        }
     return {-1,-1};
    }
