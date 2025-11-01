#include<iostream>
using namespace  std;

struct Book{
string title,author;
int pages;
float price;
};

int main()
{
  Book detail;
  cout<<"Enter title of the book: ";
  getline(cin,detail.title);
  cout<<"Enter name of author: ";
  getline(cin,detail.author);
  cout<<"Enter number of pages: ";
  cin>>detail.pages;
  cout<<"Enter the price of book ";
  cin>>detail.price;

  cout<<endl<<"----------------"<<endl<<endl;

  cout<<"The title of book is: "<<detail.title<<endl;
  cout<<"The author of book is: "<<detail.author<<endl;
  cout<<"The Books contains "<<detail.pages<<" pages"<<endl;
  cout<<"Final price of the book is: "<<detail.price<<endl;

  return 0;
}
