#include<iostream>
using namespace std;

struct ListNode{
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class LinkedList{
private:
    ListNode *head, *tail;
public:
  LinkedList() : head(nullptr), tail(nullptr) {}

  void insert(int x){
    ListNode *newNode = new ListNode(x);
    if(!head) head= tail= newNode;
    else{
      tail->next = newNode;
      tail = newNode;
    }
  }

  ListNode* getHead() const{
    return head;
  }

  void setHead(ListNode* newHead){
    head = newHead;
    tail= head;
    while(tail && tail->next) tail= tail->next;
  }

  ListNode *mergeListsIterative(ListNode *l1, ListNode *l2){

    ListNode dummy(0);
    ListNode *curr= &dummy;

    while(l1 && l2){
      if(l1->val < l2->val){
        curr->next= new ListNode(l1->val);
        l1= l1->next;
      }
      else{
        curr->next= new ListNode(l2->val);
        l2= l2->next;
      }
      curr= curr->next;
    }

    while(l1){
      curr->next= new ListNode(l1->val);
      l1= l1->next;
      curr= curr->next;
    }
    while(l2){
      curr->next= new ListNode(l2->val);
      l2= l2->next;
      curr= curr->next;
    }

    return dummy.next;
  }

  ListNode *mergeListsRecursive(ListNode *l1, ListNode *l2){
    if(!l1) return copyList(l2);
    if(!l2) return copyList(l1);

    if(l1->val < l2->val){
      ListNode *node= new ListNode(l1->val);
      node->next= mergeListsRecursive(l1->next, l2);
      return node;
    }
    else{
      ListNode *node= new ListNode(l2->val);
      node->next= mergeListsRecursive(l1, l2->next);
      return node;
    }
  }

  ListNode* copyList(ListNode *node){
    if(!node) return nullptr;
    ListNode *newNode= new ListNode(node->val);
    newNode->next= copyList(node->next);
    return newNode;
  }

  void display() const{
    ListNode* temp = head;
    while(temp){
      cout<<temp->val<<" -> ";
      temp = temp->next;
    }
    cout<<"nullptr"<<endl;
  }

  ~LinkedList(){
    ListNode* temp;
    while(head){
      temp = head;
      head = head->next;
      delete temp;
    }
  }
};

int main(){
  LinkedList list1, list2;
  int val, choice;
  do{
    cout<<"\n1. Insert in List 1\n2. Insert in List 2\n3. Merge Iteratively\n4. Merge Recursively\n5. Display Lists\n0. Exit\nEnter your choice: ";
    cin>>choice;
    switch(choice){
      case 1:{
        cout<<"Enter value to insert in List 1: ";
        cin>>val;
        list1.insert(val);
        break;
      }
      case 2:{
        cout<<"Enter value to insert in List 2: ";
        cin>>val;
        list2.insert(val);
        break;
     }
     case 3:{
        LinkedList mergeList;
        mergeList.setHead(list1.mergeListsIterative(list1.getHead(), list2.getHead()));
        cout<<"Merged List (Iterative): ";
        mergeList.display();
        break;
      }
     case 4:{
        LinkedList mergeList;
        mergeList.setHead(list1.mergeListsRecursive(list1.getHead(), list2.getHead()));
        cout<<"Merged List (Recursive): ";
        mergeList.display();
        break;
      }  

     case 5:{
          cout<<"List 1: ";
          list1.display();
          cout<<"List 2: ";
          list2.display();
          break;
        } 

      case 0:  {
        cout<<"Exiting..."<<endl;
        break;
      }
      default:
        cout<<"Invalid choice. Please try again."<<endl;
  }
}while(choice != 0);

  return 0;
}
