#include<iostream>
#include <stdexcept>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node(int x, Node* nx=nullptr) : data(x), next(nx) {}
};

class List{
private:
  Node *head;
  Node *tail;
public:
  List() : head(nullptr), tail(nullptr) {}

  void add(int val){
    Node *nw= new Node(val);

    if(!head){
      head=tail= nw;
      return;
    }

    tail->next= nw;
    nw->next= nullptr;
    tail= nw;
  }

  void RemoveMid(){
    if(!head) throw runtime_error("List is empty");
  /* // Method 1: Size Calculation
    int size=0;
    Node *temp=head;
    while(temp!=nullptr){
      temp=temp->next;
      size++;
    }

    if(size==1){
      delete head;
      head=tail=nullptr;
      return;
    }

    temp= head;
      for(int i=0;i<size/2 -1;i++){
        temp= temp->next;
      }
      Node *remove= temp->next;
      temp->next= remove->next;
      if(remove==tail) tail= temp;
      delete remove;
    */ 
    // Method 2: Three Pointers

    Node *slow= head, *fast= head, *prev= nullptr;
    if(!head->next){
      delete head;
      head= tail= nullptr;
      return;
    }
    while(fast && fast->next){
      prev= slow;
      slow= slow->next;
      fast= fast->next->next;
    }
    prev->next= slow->next;
    if(slow==tail) tail= prev;
    delete slow;

  }

  void display(){
    if(!head) throw runtime_error("List is empty");
    Node* temp= head;
    cout<<"List: ";
    while(temp){
      cout<<temp->data<<" -> ";
      temp= temp->next;
    }
    cout<<endl;
  }

  ~List(){
    Node* temp= head;
    while(temp){
      Node* save= temp->next;
      delete temp;
      temp= save;
    }

    head= tail =nullptr;
  }
};

int main(){
  int choice, val;
  List ll;
  do{
    cout<<"1.Add a node\n2.Remove Middle Node\n3.Display List\n0.Exit\n";
    cout<<"Enter a choice: ";
    cin>>choice;
    switch(choice){
      case 1:
       cout<<"Enter a value: ";
       cin>>val;
       ll.add(val); 
       break;
      case 2:
       try{
        ll.RemoveMid();
       } catch(const runtime_error& r){
         cout<<r.what()<<endl;
        }
       break;
      case 3:
       try{
        ll.display();
      } catch(const runtime_error& r){
          cout<<r.what()<<endl;
        }
       break;
      case 0:
       cout<<"Exiting\n";
       break;
      default:
       cout<<"Enter a valid choice\n";
    }
  }while(choice!=0);
}
