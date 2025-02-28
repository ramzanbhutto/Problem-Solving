#include<iostream>
#include<climits>
#define ll long long
using namespace std;
int divide(int,int);
int main()
{
    int dividend,divisor;
    cout<<"Enter the dividend: ";
    cin>>dividend;
    cout<<"Enter the divisor: ";
    cin>>divisor;
    cout<<"The result is: "<<divide(dividend,divisor)<<endl;
    return 0;
}
int divide(int dividend, int divisor) {
    if(dividend==INT_MIN && divisor==-1)
        return INT_MAX;
    ll a=abs((ll)dividend);
    ll b=abs((ll)divisor);
    ll res=0;
    while(a>=b)
    {
        ll x=b;
        ll y=1;
        while(a>=(x<<1))
        {
            x<<=1;
            y<<=1;
        }
        res+=y;
        a-=x;
    }
    return (dividend<0)^(divisor<0)?-res:res;
}
