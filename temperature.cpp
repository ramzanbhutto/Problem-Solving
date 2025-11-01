#include<iostream>
#include<vector>
#define pb tem.push_back
#define v std::vector<double>
#define cout std::cout 
#define cin std::cin 
#define endl std::endl 

v convertTemperature(double);
int main()
{
  std::ios_base::sync_with_stdio(false);
  cout.tie(NULL);

  double celsius; 
  cout<<"Enter Temperature in celsius: ";
  cin>>celsius;
  v data = convertTemperature(celsius);
  cout<<"Temperature in Kelvin is: "<<data[0]<<endl;
  cout<<"Temperature in Fahrenheit is: "<<data[1]<<endl;

  return 0;
}
v convertTemperature(double c)
{
  v tem;
  pb(c+273.15);
  pb(c*(9/5.0)+32);

  return tem;
}
