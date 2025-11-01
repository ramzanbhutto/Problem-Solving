#include<iostream>
using namespace std;

struct Node{
  int val;
  Node* next;
  Node(int x, Node* nxt=nullptr): val(x), next(nxt) {}
};

class Cycle{
private:
  Node* head;
  Node* tail;
public:
  Cycle(): head(nullptr), tail(nullptr) {}

  void insert(int x){
    Node* newNode= new Node(x);
    if(!head){
      head=tail=newNode;
      newNode->next=head; // Making it circular
      return;
    }
    tail->next=newNode;
    newNode->next=head; // Making it circular
    tail=newNode;
  }

  bool hasCycle(){
    if(!head) throw runtime_error("List is empty");
    Node* slow= head, *fast=head;

    while(fast && fast->next){
      slow=slow->next;
      fast=fast->next->next;
      if(slow==fast) return true;
    }

    return false;
  }

  void display(){
    if(!head)  throw runtime_error("List is empty");
    cout<<"Head: "<<head->val<<endl;
    cout<<"Tail: "<<tail->val<<endl;
    cout<<"List: ";
    Node* temp=head;
    while(true){
      cout<<temp->val<<" -> ";
      temp=temp->next;
      if(temp==head) break; // To avoid infinite loop in circular list
    }

    cout<<endl;
  }

  ~Cycle(){
    Node* temp=head;
    tail->next=nullptr; // Break the circular link to avoid infinite loop
    while(temp){
      Node* nextNode=temp->next;
      delete temp;
      temp=nextNode;
    }
    head=tail=nullptr;
  }

};

int main(){
  int choice, value;
  Cycle cl;
  do{
    cout<<"1. Insert\n2. Check Cycle\n3. Display\n0. Exit\n";
    cin>>choice;
    switch(choice){
      case 1:
        cout<<"Enter value to insert: ";
        cin>>value;
        cl.insert(value);
        break;
      case 2:
         {
          try{
            cl.hasCycle() ? cout<<"Cycle detected\n" : cout<<"No cycle\n";
          }catch(const runtime_error& e){
            cout<<e.what()<<endl;
          }
      }
        break;
      case 3:
       {
        try{
          cl.display();
        }catch(const runtime_error& e){
          cout<<e.what()<<endl;
        }
       }
        break;
      case 0:
        cout<<"Exiting..."<<endl;
        break;
      default:
        cout<<"Invalid choice. Try again."<<endl;
   }
  }while(choice!=0);

  return 0;
}
