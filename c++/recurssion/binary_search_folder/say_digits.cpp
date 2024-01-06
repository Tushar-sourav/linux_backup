#include <iostream>
#include <vector>
#include <string.h>


void sayDigit(int n,std::vector<std::string> num){
    if(n==0){
        return;
    }

    int digit=n%10;
    n=n/10;

    sayDigit(n,num);
    std::cout<<num[digit]<<std::endl;


}

int main(){
    int n;
    std::cin>>n;

    std::vector<std::string> num={"zero","one","two","three","four","five","six","seven","eight","nine"};

    sayDigit(n,num);



}