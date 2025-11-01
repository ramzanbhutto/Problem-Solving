#include<iostream>
using namespace std;

struct Node{
  int info;
  Node* next;
  Node(int val, Node* nxt = nullptr) : info(val), next(nxt) {}
};

class List{
private:
  Node* head;
  Node* tail;
  int size=0;
public:
  List() : head(nullptr) {}

  void insert(int val){
    Node *nw= new Node(val);
    if(!head){
    head=tail=nw;
    size++;
    return;
    }

    tail->next=nw;
    nw->next=nullptr;
    tail=nw;
    size++;
  }

  void display(){
    if(!head){
      cout<<"List is empty"<<endl;
      return;
    }

    cout<<"List: ";
    Node* temp=head;
    while(temp){
      cout<<temp->info<<" | "<<temp->next<<" -> ";
      temp=temp->next;
  }
  cout<<"nullptr"<<endl;
 }

  List* middle(){
    if(!head){
      cout<<"List is empty"<<endl;
      return nullptr;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast && fast->next){
      slow=slow->next;
      fast=fast->next->next;
    }

    List* midList=new List();
    while(slow){
      midList->insert(slow->info);
      slow=slow->next;
    }
    return midList;
  }

  ~List(){
    Node* temp=head;
    while(temp){
      Node* toDelete=temp;
      temp=temp->next;
      delete toDelete;
    }
    head=tail=nullptr;
  }
};

int main(){
  int choice, val;
  List* myList=new List();
  do{
    cout<<"1. Insert\n2. Display\n3. Find Middle\n0. Exit\nEnter your choice: ";
    cin>>choice;
    switch(choice){
      case 1:
        cout<<"Enter value to insert: ";
        cin>>val;
        myList->insert(val);
        break;
      case 2:
        myList->display();
        break;
      case 3:
        {
          List* mid=myList->middle();
          if(mid){
            cout<<"Middle element: ";
            mid->display();
            delete mid;
            mid=nullptr; 
          }
        }
        break;
      case 0:
        cout<<"Exiting..."<<endl;
        break;
      default:
        cout<<"Invalid choice, try again."<<endl;
    }
  }while(choice!=0);

  delete myList;
  myList=nullptr;
  return 0;
}
