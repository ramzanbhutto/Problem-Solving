#include<iostream>
#include<string>
using namespace std;
int main()
{

  string day;
    cout<<"Enter day: ";
    cin>>day;

    int i;

    if(day == "monday" || day == "1")
    {
         cout<<"o Planting a tree"<<endl;
         cout<<"o Going to office"<<endl;
    }
    else if(day == "tuesday" || day == "2")
    {
         cout<<"o Going to gym"<<endl;
         cout<<"o Visiting market"<<endl;
    }
    else if(day == "wednesday" || day == "3")
    {
        cout<<"o Eating Peanuts"<<endl;
        cout<<"o Cleaning mosque"<<endl;
    }
    else if(day == "thursday" || day == "4")
    {
        cout<<"o Eating Biryani"<<endl;
        cout<<"o Going to pool"<<endl;
    }
    else if(day == "friday" || day == "5")
    {
         cout<<"o Praying Jumma"<<endl;
         cout<<"o Visiting graveyard"<<endl;
    }
    else if(day == "saturday" || day == "6")
    {
         cout<<"o Living with family"<<endl;
         cout<<"o Watching movie or series"<<endl;
    }
    else if(day == "sunday" || day == "7")
    {
        cout<<"o Sleelping"<<endl;
        cout<<"Playing cricket"<<endl;
    }
    else
    {
        cout<<"Nothing to do"<<endl;
    }



    return 0;




}
