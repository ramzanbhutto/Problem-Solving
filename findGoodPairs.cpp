#include<iostream>
#include<vector>
using namespace std;
#define vec std::vector<int>

int numberOfPairs(vec& , vec&, int);
int main()
{
  ios_base::sync_with_stdio(false);

  int s1,s2;
  cout<<"Enter size1: ";
  cin>>s1;
  vec vec1(s1);
  cout<<"Enter size2: ";
  cin>>s2;
  vec vec2(s2);

  if(cin.fail() || s1<0 || s2<0){
    cerr<<"Invalid size!"<<endl;
    return -1;
  }

  cout<<"Enter elements of 1st vector: ";
  for(int& i:vec1)
  cin>>i;

  cout<<"Enter elements of 2nd vector: ";
  for(int& j:vec2)
  cin>>j;

  int k;
  cout<<"Enter a integer for operation: ";
  cin>>k;

  if(cin.fail()){
    cerr<<"Invalid elements!"<<endl;
    return -1;
  }
  
  cout<<"The number of good pairs are: "<<numberOfPairs(vec1,vec2,k)<<endl;

 return 0;

}

int numberOfPairs(vec& nums1,vec& nums2, int t)
{
 int count=0;
  for(int i=0;i<nums1.size();i++){
    for(int j=0;j<nums2.size();j++){
      if( nums2[j]*t!=0 && nums1[i] % (nums2[j]*t)==0 )
        count++;
    }
  }

  return count;
}
