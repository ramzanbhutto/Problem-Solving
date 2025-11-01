#include <iostream>
using namespace std;

int main()
{
   //  freopen("test_jar.txt","r",stdin);    //i was running extra test cases through file handling
    int s;
    cin>>s;

    while(s--)
    {
        int box,part;
        cin>>box>>part;

        bool check= false;
        while (box>=part)
        {
            if (box==part)
            {
                check =true;
                break;
            }
            if (box%3!=0)
            {
                break;
            }
            if ((box/3)>=part)
            {
                box=box/ 3;
            }
            else
            {
                box =(2*box)/3;
            }
        }
        if(check)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
