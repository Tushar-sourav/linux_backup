#include <iostream>
#include <stack>

void printStack(std::stack<int> mystack){
  while(!mystack.empty()){
    std::cout<<mystack.top()<<" ";
    mystack.pop();
  }
  std::cout<<std::endl;
}


int main(){
    std::stack<int> mystack;

    mystack.push(10);
    mystack.push(8);
    mystack.push(3);

    mystack.pop();

    printStack(mystack);

    // if(mystack.empty())
    //   std::cout<<"stack is empty"<<std::endl;
    // else
    //    std::cout<<"stack is not empty"<<std::endl;

    // std::cout<<"stack size is: "<<mystack.size()<<std::endl;
}