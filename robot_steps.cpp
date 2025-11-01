#include<iostream>
using namespace std;
int main()
{
 int x1,y1,x2,y2;
 cin>>x1>>y1>>x2>>y2;
 int dx =abs(x2-x1);  //i used abs() fuction to get absolute value
 int dy =abs(y2-y1);   //abs makes sure that distance is always positive
 int diagonal=dx;
 if(dy<diagonal)
  {
     diagonal=dy;
  }
 int remaining_steps = abs(dx-dy);

 int total_steps =diagonal+remaining_steps;
 int energy =2*diagonal+remaining_steps;

 cout<<total_steps<<" "<<energy;

    return 0;
}
