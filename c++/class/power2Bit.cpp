#include <iostream>

int main(){
    int n;
    std::cin>>n;

    if((n&(n-1))==0){
        std::cout<<"number is power of 2";
        std::cout<< std::endl;
    }
}