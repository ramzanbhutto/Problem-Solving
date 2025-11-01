/* iota is used to automatically fill a range with sequentially increasing values as per given data type.
   It is defined in the <numeric> header file.
   The first parameter is the beginning of the range, the second is the end of the range, and the third is the starting value. */

// Note: The iota function works with any data type that supports the increment operator. It increments by +1 always

#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

class C{
private:
 int a;
public:
 C(int val=0) : a(val) {} 
 
 C& operator=(int v){
    a = v;
    return *this;
  } 
 C& operator++(){
 a++;
 return *this;
 }
 friend ostream& operator<<(ostream& os, const C &c);
};
ostream& operator<<(ostream& os, const C &c){
  os<<c.a;
  return os;
}

int main(){

 vector<C> vc(5);
 iota(vc.begin(),vc.end(), 1); // or iota(vc.begin(),vc.end(), C(1));  or iota(vc.begin(),vc.end(), C{1};  or iota(vc.begin(), vc.end(), C()); and C() will be start from the value given in parameterized constructor
 cout<<"The class vector is: ";
 for(int i=0;i<5;i++) cout<<vc[i]<<" ";
 cout<<endl;
 
 vector<int> vec(5);
 iota(vec.begin(), vec.end(), 1);
 cout<<"The integer vector is: ";
 for(int v: vec) cout<<v<<" ";
 cout<<endl;
 
 int arr[5];
 iota(arr, arr+5, 0); // Filling the array with values starting from 0
 cout<<"The integer array is: ";
 for(int i: arr)  cout<<i<<" ";
 cout<<endl;

char carr[5];
iota(carr, carr+5, 'a'); // Filling the array with values starting from 'a'
cout<<"The character array is: ";
for(char i: carr)  cout<<i<<" ";
cout<<endl;

float farr[5];
iota(farr, farr+5, 0.5); // Filling the array with values starting from 0.5
cout<<"The float array is: ";
for(float i: farr)  cout<<i<<" ";
cout<<endl;

string sarr[5];
iota(sarr, sarr+5, "Hello"); // This will not work as iota does not support string
cout<<"The string array is: ";
for(string i: sarr)  cout<<i<<" ";
cout<<endl;


return 0;
}
