#include <iostream>

// encapsulation --> Data hiding
// inheritance --> parent class ko inherit karna.
// mode of inheritance --> public, private, protected
// types of inheritance --> single , multilevel,multiple,hybrid,heirerchical
// inheritance ambiguity
// Polymorphism--> multi form
// complile time poly, run time poly
// compile time poly/static poly --> function overloading and operator overloading
// run time polu/dynamic poly-->method overriding
// Abstraction-->implementation hiding

class Animal{
    public:
    std::string name;
    int height;
    int weight;

    void setName(std::string name){
        this->name=name;
    }

};

class Lion: public Animal{
    public:

    int color;

    void sleep(){
        std::cout<<"sher avi sone ja raha hai"<<std::endl;
    }
};


int main(){
    Lion l1;

    l1.setName("panther");
    std::cout<<l1.name<<std::endl;
    std::cout<<l1.height<<std::endl;
}