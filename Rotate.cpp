#include<iostream>
using namespace std;
int main()
{
  int s=5,k;
  int arr[s],vec[s];
  cout<<"Enter units to rotate: ";
  cin>>k;
  cout<<"Enter elements: ";
  for(int i=0;i<s;i++)
  cin>>arr[i];

/* for(int i=s-1;i>=0;i--)
    vec[i]=arr[i];

  for(int i=0;i<(k%s);i++)
    vec[i]=arr[i];
  
  for(int i=k%s;i<s;i++ )
    vec[i]=arr[i];
*/
 for(int i=0;i<s;i++)
    vec[(i+k)%s]=arr[i];

  cout<<"Rotated array is: ";
  for(int i=0;i<s;i++)
    cout<<vec[i]<<" ";
cout<<endl;
  return 0;
}
