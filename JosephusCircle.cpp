#include<iostream>
#include <stdexcept>
using namespace std;

struct Node{
  int num;
  Node* next;
  Node(int n):num(n), next(nullptr){}
};

class JosephusCircle{
private:
  Node* head, *tail;
  int size;
public:
  JosephusCircle():head(nullptr), tail(nullptr), size(0){}

  void add(int n){
    Node* nw = new Node(n);
    if(!head){
      head=tail= nw;
      tail->next = head;
      size++;
      return;
    }

    tail->next = nw;
    tail = nw;
    tail->next = head;
    size++;
  }

  void display(){
    if(size==0){
      cout<<"Circle is empty."<<endl;
      return;
    }
    cout<<"Circle: ";
    Node* curr = head;
    do{
      cout<<curr->num<<" ";
      curr = curr->next;
    }while(curr !=head);
    cout<<endl;
  }

  int solve(int k){
    if(size ==0) throw runtime_error("Circle is empty");
    if(k<1) throw runtime_error("k must be at least 1");
    
    if(k>size) k = k % size == 0 ? size : k % size;

    Node* curr = head, *prev = tail;
    while(size>1){
      for(int i=1; i<k; i++){
        prev = curr;
        curr = curr->next;
      }
      // remove curr
      prev->next = curr->next;
      cout<<curr->num<<" "<<"is eliminated."<<endl;
      if(curr == head) head = head->next;
      if(curr == tail) tail = prev;
      delete curr;
      curr = prev->next;
      size--;
    }

    int survivor = head->num;
    delete head;
    head = tail = nullptr;
    size = 0;
    return survivor;
  }

  ~JosephusCircle(){
    if(size==0) return;
    Node* curr= head;
    tail->next = nullptr; // break the Circle
    while(curr){
      Node* next = curr->next;
      delete curr;
      curr = next;
    }
    head = tail = nullptr;
    size = 0;
  }

};

int main(){
  JosephusCircle jc;
  int num, k;
  cout<<"Enter number of people: ";
  cin>>num;
  cout<<"Enter k (step count): ";
  cin>>k;

  for(int i=1; i<=num; i++){
    jc.add(i);
  }
  jc.display();

  int survivor;
  try{
    survivor = jc.solve(k);
  }catch(const runtime_error& e){
    cerr<<"Error: "<<e.what()<<endl;
    return -1;
  }
  cout<<"The survivor is person number: "<<survivor<<endl;
  return 0;
}
