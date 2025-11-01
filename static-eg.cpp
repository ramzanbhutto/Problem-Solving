#include<iostream>
using namespace std;
class constdest
{
private:
int data;
public:
constdest(int);
~constdest();
};
constdest::constdest(int val)
{
data = val;

cout<<"\n Object "<<data<<" Constructor";
}
constdest::~constdest()
{
cout<<"\nObject "<<data<<" Destructor";
}
void create();
constdest zeroth(0); // Global Object of Class and destoryed at the end of the program

int main()
{
constdest first(1); //Local Object of constdest class 
cout<<"\t (Global object created before main()) ";
constdest second(2); //Local Obj of constdest class
cout<<"\t Local automaitc Object in main()";
static constdest third(3); //Local Object of constdest class
cout<<"\t (Local Static in main()) ";
create();
constdest fourth(4);
cout<<"\t (Local automaitc Object in main() ) ";//local obj of class
cout<<"\n\n\t... Thanks ...\n\n";
  return 0;
}

void create()
{
constdest fifth(5);
cout<<"\t Local automtic in create()";
static constdest sixth(6);
cout<<"\t Local static in create()";
constdest seventh(7);
cout<<"\t Local Automatic in create()";
}
