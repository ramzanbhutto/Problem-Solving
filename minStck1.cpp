#include<iostream>
using namespace std;

class Stack{
private:
  struct Node{
    int val;
    Node *next;
    Node(int v, Node *nxt = nullptr) : val(v), next(nxt) {}
  }*top, *minTop;
public:
  Stack() : top(nullptr), minTop(nullptr) {}

  void push(int x){
    top= new Node(x, top);
    if(!minTop || x<=minTop->val) minTop= new Node(x, minTop);
    else minTop= new Node(minTop->val, minTop);
  }

  void pop(){
    if(!top) return;
    
    Node *temp= top;
    top= top->next;
    delete temp;

    temp= minTop;
    minTop= minTop->next;
    delete temp;
  }

  int getMin() const{
    if(!minTop) throw runtime_error("Stack is empty");
    return minTop->val;
  }


  Stack(const Stack&) = delete; 
  Stack& operator=(const Stack&) = delete;

  ~Stack(){
    while(top) pop();
  }
};

int main(){
  int arr[]= {5,1,3,0,4,2};
  Stack s;
  for(int x : arr) s.push(x);

  int minVal;
  try{
    minVal= s.getMin();
    cout<<"Minimum value in the stack: "<<minVal<<endl;
    s.pop();
    minVal= s.getMin();
    cout<<"Minimum value in the stack: "<<minVal<<endl;
    s.pop();
    minVal= s.getMin();
    cout<<"Minimum value in the stack: "<<minVal<<endl;
    s.pop();
    minVal= s.getMin();
    cout<<"Minimum value in the stack: "<<minVal<<endl;
    s.pop();
  }
  catch(const runtime_error &e){
    cout<<e.what()<<endl;
  }

  return 0;
}
