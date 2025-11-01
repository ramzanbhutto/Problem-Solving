#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Welcome to Mobile Shop Management!"<<endl<<endl;
    int pass = 12345;

    cout<<"Login your user account."<<endl<<endl;

    string user;
    cout<<"Enter username: ";
    cin>>user;
    int pin;
    cout<<"Enter password: ";
    cin>>pin;
    cout<<endl;

    if(pin != pass)
         {

         cout<<"Password was incorrect so try again!"<<endl;

         }
  else
  {


    while(pin==pass)
     {


        cout<<user<<", you "<<"Login successfully!"<<endl;
        cout<<endl;
        int total = 15;
        cout<<"Total mobiles are: "<<total<<endl;
        cout<<"5 mobiles of nokia"<<endl;
        cout<<"5 mobiles of android"<<endl;
        cout<<"5 mobiles of apple"<<endl;
        pin++;
        cout<<endl;

        cout<<"Price of Apple is 75000"<<endl;
        cout<<"Price of Android is 47000"<<endl;
        cout<<"Price of Nokia is 35000"<<endl;
        cout<<endl;

        int buy = 1;
        cout<<"You can buy only one mobile at a time!"<<endl;
        string mobile;
        cout<<"Enter mobile company, android or apple or nokia that you want to buy: ";
        cin>>mobile;
        cout<<endl;

        if(mobile=="apple")
         {
            cout<<"75000 paid! "<<endl;

            cout<<endl;
            cout<<"Congratulations on buying "<<mobile<<endl;
            cout<<endl;

            total = total-buy;

            cout<<"Remaining mobiles are: "<<total<<endl;

         }
        else if(mobile == "android")
         {
            cout<<"47000 paid! "<<endl;

            cout<<endl;
            cout<<"Congratulations on buying "<<mobile<<endl;
            cout<<endl;

            total = total-buy;

            cout<<"Remaining mobiles are: "<<total<<endl;

         }
        else if(mobile == "nokia")
         {
            cout<<"35000 paid! "<<endl;

            cout<<endl;
            cout<<"Congratulations on buying "<<mobile<<endl;
            cout<<endl;

            total = total-buy;

            cout<<"Remaining mobiles are: "<<total<<endl;
         }

         else
         {
             cout<<"Enter correct brand name again"<<endl;
         }

    }

  }

  return 0;

}
