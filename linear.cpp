#include<iostream>
using namespace std;

int linear(int arr[], int x, int target)
{
    for(int i=0; i<x; i++)
    {
        cin>>arr[i];
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main()
{
    int x;
    cout<<"Enter size of the array: ";
    cin>>x;

    int arr[x];

    int target = 5;

    cout<<linear(arr,x,target)<<endl;

    return 0;

}
