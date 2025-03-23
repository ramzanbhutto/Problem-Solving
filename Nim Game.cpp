#include<iostream>
bool canWinNim(int);
int main()
{
  int stones;
  std::cout<<"Enter the number of stones in the heap: ";
  std::cin>>stones;

  if(!canWinNim(stones))  std::cout<<"You friend wins the game.\n";
  else  std::cout<<"You win the game.\n";
  return 0;
}

bool canWinNim(int n)
{
  return n%4==0 ? false : true;
}
