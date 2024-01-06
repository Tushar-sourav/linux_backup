#include <iostream>

int main(){
    int a=4;
    int *ptr=&a;
    std::cout<<a<<" "<<ptr<<" "<<&a<<std::endl;
}