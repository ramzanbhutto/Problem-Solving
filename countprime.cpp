#include<iostream>
using namespace std;
void primeinRange(int a, int b);
bool isPrime(int num);
int countfactors(int num);

int main()
{
    int a,b;
    cout<<"Enter starting number: ";
    cin>>a;
    cout<<"Enter ending number: ";
    cin>>b;
    cout<<"The prime number in this range is :"<<endl;
    primeinRange(a,b);

    return 0;
}


    void primeinRange(int a, int b)
    {
      for(int i=a; i<=b; i++)
      {
        if(isPrime(i))
          cout<<i<<endl;
      }
    }

    bool isPrime(int num)
    {
        if(num<2)
          return false;
        if(countfactors(num)==2)
          return true;
        else
          return false;
    }

    int countfactors(int num)
    {
      int count=0;
      for(int i=1; i<=num; i++)
      {
        if(num%i==0)
           count++;
      }
      return count;
    }
