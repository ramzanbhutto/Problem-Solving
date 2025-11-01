#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next=nullptr) : val(x), next(next) {}
};

class Solution{
public:
  ListNode* head;
  int size;
  Solution(): head(nullptr), size(0) {}
  
  void addNode(int val){
    ListNode* newNode= new ListNode(val);
    if(head==nullptr)  head= newNode;
    else{
      ListNode* temp= head;
      while(temp->next!=nullptr){
        temp= temp->next;
      }
      temp->next= newNode;
    }
  }
  
  ListNode *removeNthFromEnd(ListNode* node, int n){
    ListNode *curr= head;
    size=0;

    while(curr!=nullptr){
      size++;
      curr= curr->next;
    }

    if(n==size){
      ListNode* temp= node;
      node= node->next;
      delete temp;
      return node;
    }

    curr= node;
    int i= size-n;

    while(i>1){
      curr= curr->next;
      i--;
    }

    ListNode* remove= curr->next;
    curr->next= remove->next; /* curr->next= curr->next->next; */ 
    delete remove;

    return node;
  }

  void printList(ListNode* node){
    ListNode* temp= node;
    while(temp!=nullptr){
      cout<<temp->val<<" -> ";
      temp= temp->next;
    }
    cout<<"nullptr"<<endl;
  }

  ~Solution(){
    ListNode* temp= head;
    while(temp!=nullptr){
      ListNode* next= temp->next;
      delete temp;
      temp= next;
    }
    head= nullptr;
  }
};

int main(){
  Solution s;

  int choice, val, n;
  do{
    cout<<"1. Add Node\n2. Remove Nth Node from End\n3. Print List\n0. Exit\nEnter your choice: ";
    cin>>choice;
    switch(choice){
      case 1:
        cout<<"Enter value to add: ";
        cin>>val;
        s.addNode(val);
        break;
      case 2:
        cout<<"Enter n (position from end): ";
        cin>>n;
        s.head= s.removeNthFromEnd(s.head, n);
        break;
      case 3:
        s.printList(s.head);
        break;
      case 0:
        cout<<"Exiting..."<<endl;
        break;
      default:
        cout<<"Invalid choice! Please try again."<<endl;
    }
  }while(choice!=0);

  return 0;
}
