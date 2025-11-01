#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
      long long n;
        cin>>n;
        long long k=1;
    
      while(n%k==0) 
            k++;

        cout<<k-1<<endl;
    }
    return 0;
}
