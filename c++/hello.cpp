#include <iostream>

void fibb(int n){
    int a=0;
    int b=1;
    int c;
    std::cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++){
        c=a+b;
        std::cout<<c<<" ";
        a=b;
        b=c;
    }
}

int main(){
    int n=6;
    fibb(n);
}