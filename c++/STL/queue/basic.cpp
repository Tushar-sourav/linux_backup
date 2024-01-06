#include <iostream>
#include <queue>

void printQue(std::queue<int> myque){
    while(!myque.empty()){
        std::cout<<myque.front()<<" ";
        myque.pop();
    }
    std::cout<<std::endl;
}



int main(){
    std::queue<int> myque;

    myque.push(1);
    myque.push(2);
    myque.push(3);

    // std::cout<<myque.size();
    // std::cout<<myque.front();
    // std::cout<<myque.back();
    printQue(myque);

}