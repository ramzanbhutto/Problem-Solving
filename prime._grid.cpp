#include <iostream>
using namespace std;

bool Prime(int num)
{
    if (num<=1)
        return false;
    for (int i=2; i<num; ++i)
    {
        if (num % i ==0)
            return false;
    }
    return true;
}

int main()
{
    int rows, columns;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;

    int num = 2;

    cout<<"Prime number grid:"<<endl;

    for (int i=0; i<rows; ++i)
    {

        for (int j=0; j<columns; ++j)
        {

            while (!Prime(num))
            {
                num++;
            }

            cout<<num<< "\t";
            num++;
        }
        cout<<endl;
    }

    return 0;
}
