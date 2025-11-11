#include<iostream>
#include<vector>
using namespace std;

void SortColors(vector<int> &vec){
  int c0=0, c1=0, c2=0;

  for(int n: vec){
    if(n==0) c0++;
    else if(n==1) c1++;
    else c2++;
  }

  int idx=0;
  for(int i=0; i<c0; i++) vec[idx++]= 0;
  for(int i=0; i<c1; i++) vec[idx++]= 1;
  for(int i=0; i<c2; i++) vec[idx++]= 2;

}

int main(){
  int s;
  cout<<"Enter size of Colors: ";
  cin>>s;

  vector<int> colors(s);
  cout<<"Enter Coloras0,1,2): ";
  for(int &n:colors) cin>>n;

  SortColors(colors);
  cout<<"Sorted Colors are: ";
  for(int n: colors) cout<<n<<" ";
  cout<<endl;

  return 0;
}
