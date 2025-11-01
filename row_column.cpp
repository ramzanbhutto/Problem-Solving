#include<iostream>
using namespace std;
int main()
{
  int A[3][3];

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
       cin>>A[i][j];
    }
    cout<<endl;
  }

  cout<<endl;

  for(int i=0; i<3; i++)
  {
     int sum = 0;
     for(int j=0; j<3; j++)
     {
        sum += A[i][j];
   }
   cout<<"Sum of row "<<i+1<<" is: "<<sum<<" ";
   cout<<endl;
}

for(int j=0; j<3; j++)
  {
     int sum = 0;
     for(int i=0; i<3; i++)
     {
        sum += A[i][j];
   }
   cout<<"Sum of column "<<j+1<<" is: "<<sum<<" ";
   cout<<endl;
}


 return 0;
}

