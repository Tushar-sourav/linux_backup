#include <iostream>

int main(){
    int arr[10]={0};
    

    std::cout<<arr<<std::endl;
    std::cout<<*arr<<std::endl;
    std::cout<<*arr+1<<std::endl;
    std::cout<<*(arr+1)<<std::endl;

    for(int i=0;i<10;i++){
        std::cout<<*(arr+i)<<" ";
    }
    std::cout<<std::endl;
}