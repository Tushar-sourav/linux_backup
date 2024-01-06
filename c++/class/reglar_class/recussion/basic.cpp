#include <iostream>

void printN(int in,int n){
    if(in>n){
        return;
    }

    std::cout<<in<<std::endl;
    in++;
    printN(in,n);
}


int main(){
    int n=5;
    printN(1,n);
}