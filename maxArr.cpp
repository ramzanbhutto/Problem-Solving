#include<iostream>
#include<climits>
using namespace std;
int main()
{

    int x;
    cout<<"Enter size of array: ";
    cin>>x;

    int arr[x];

    int i;
    for( i=0; i<x; i++)
    {
        cin>>arr[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for( i=0; i<x; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }

    cout<<"Maximum number in array is: "<<max<<endl;
    cout<<"Minimum number in array is: "<<min<<endl;

return 0;

}
