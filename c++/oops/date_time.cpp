#include <iostream>

class Date{

};

int main(){
    time_t now=time(0);

    char* date_time =ctime(&now);

    std::cout<<date_time<<std::endl;
}