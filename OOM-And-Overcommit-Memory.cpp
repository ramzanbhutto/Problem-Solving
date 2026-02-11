#include<iostream>
#include <new>
int main(){
  size_t count=0;
  try{
    while(1){
      int *ptr= new int[10000000];
      for(int i=0; i<10000000; i++){
        *(ptr+i)=i; // Initialize the allocated memory to prevent optimization, otherwise the compiler might optimize away the allocation since it's not used and do lazy allocation. By writing to the allocated memory, we ensure that the allocation actually happens and is not optimized away.
      }
      ++count;
      std::cout<<"Succcessfully allocated "<<count<<" blocks of memory."<<std::endl;
    }
  }catch(std::bad_alloc& e){
    std::cout<<"Memory allocation failed after "<<count<<" allocations"<<" with error: "<<e.what()<<std::endl;
  }

  return 0;
}
