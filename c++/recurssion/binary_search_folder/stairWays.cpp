#include <iostream>

int noOfWays(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    return noOfWays(n-1)+noOfWays(n-2);
}

int main(){
    int n;
    std::cin>>n;

    std::cout<<noOfWays(n)<<std::endl;
}