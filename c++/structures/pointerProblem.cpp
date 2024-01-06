#include <iostream>

typedef int* pointer;

int main(){
    int x=5,y=8;
    pointer a=&x,b=&y;
    std::cout<<a<<" "<<b<<std::endl;
}