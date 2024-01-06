#include <iostream>


void printNum(int n){
    if(n==0){
        return ;
    }

    std::cout<<n<<" ";
    std::cout<<std::endl;

    printNum(n-1);
}

int main(){
    int n;
    std::cin>>n;
    printNum(n);
}