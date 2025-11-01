#include<iostream>
using namespace std;
int main()
{

    int x;
    cout<<"Enter size of number that you want to reverse using array: ";
    cin>>x;

    int arr[x];

    int i;
    for( i=1; i<=x; i++)
    {
        cin>>arr[i];
    }
   
     for( i=x-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }


    return 0;

}
