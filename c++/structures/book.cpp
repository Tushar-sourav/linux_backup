#include <iostream>



typedef struct book{
    std::string name;
    int price;
    int no_pages;
}bk;

bk HarryPotter;
bk LOR;

int main(){
    HarryPotter.name="Harry Potter";
    HarryPotter.no_pages=200;
    HarryPotter.price=200;

    LOR.name="Lords Of The Rings";
    LOR.no_pages=300;
    LOR.price=300;


    std::cout<<LOR.name<<std::endl;
}