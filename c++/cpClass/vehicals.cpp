#include <iostream>
// #include <iostream>

enum Brand {
TATA,
MAHINDRA,
MUSTANG,
};

struct carDetails{
    char name[10];
    int price;
    int year;
}car;

void adddetails(enum Brand b,char name[],float price,int year){
    std::cout<<name<<std::endl;
}

int main(){
    adddetails("TATA","NEXON",1000,232,2010);
}





