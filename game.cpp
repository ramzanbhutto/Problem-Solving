#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{

    srand(time(0));                                  //srand(time(0)) will change seed value every second and gives us different guesses every single time.
    int num = rand()%100;                            //here 100 shows that the number will be between 0 and 99.

    int attempts = 1;
    cout<<"Your attempt starts with 1 "<<endl;

    int max;
    cout<<"Enter maximum attempts you want to try: ";
    cin>>max;

    cout<<"Enter your guess: ";
    int guess;
    cin>>guess;

    while(guess != num && attempts < max)
       {

        if(guess>num)
        {
          cout<<"Higher Guess⤴️"<<endl;
        }
         else
         {
             cout<<"Lower Guess⤵️"<<endl;
         }
         cin>>guess;
         attempts++;

       }

         if(guess == num)
          {
            cout<<"Accurate guess😇"<<endl;
          }
         else
          {
            cout<<"Your attempts expired😭"<<endl;
          }
  return 0;
}
