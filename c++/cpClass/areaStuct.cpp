#include <iostream>

typedef union dim{
   

    int breadth;
 char a;

}dim;



int main(){
    dim a;
    a.a='A';
    a.breadth=67;
    std::cout<<a.a<<std::endl;
    std::cout<<a.breadth<<std::endl;
}






