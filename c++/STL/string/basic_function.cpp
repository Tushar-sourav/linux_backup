#include <iostream>
#include <string>


int main(){
    int n;
    std::cin>>n;
    std::cin.ignore();

    while(n--){
        std::string temp;
        std::getline(std::cin,temp);
        std::cout<<temp<<std::endl;
    }
}