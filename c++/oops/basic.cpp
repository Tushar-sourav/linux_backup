#include <iostream>
#include <vector>


// objects -->Entity--> state/properties and behaviour.
// class -->user definded data type.
// class template for creating object and object instance of class.
// Access modifiers-->scope of propertie of objects --> public private protected
// getter ans setter-->function inside objects to access private properties 
// constructor --> object creation.Default,paramatrise,copy
// copy constructor --> Hero S(R); default present hota h. -->shallow copy karta hai.
// sallow copy--> same memory ko diff name se address kar rahe h.
// deep copy-->diff memory me copy bane.
// create copy constructor
// Hero(Hero & temp){
//     this->health=temp.health;
//     this->level=temp.level;
// }
// copy assignment operator .
// a=b;
// destructor --> memory deallocate.

class Hero {
    public:

    // Hero(){
    //     std::cout<<"counstructor is called"<<std::endl;
    // }

    Hero(std::string name,int health,char level){
        // std::cout<<"this address "<<this<<std::endl;
        this->health=health;
        this->level=level;
        this->name=name;
    }

    Hero(Hero& temp){
        std::cout<<"constructor called"<<std::endl;
        this->name=temp.name;
        this->health=temp.health;
        this->level=temp.level;
    }




    int health;
    char level;
    std::string name;

    // char getlevel(){
    //     return level;
    // }

    // void setlevel(char l){
    //     level=l;
    // }

    void print(){
        std::cout<<"name:"<<this->name<<std::endl;
        std::cout<<"health:"<<this->health<<std::endl;
        std::cout<<"level:"<<this->level<<std::endl;

    }

};


int main(){
    // Hero ramesh;
    // Hero *b=new Hero;

    // Hero rakesh(20,'b');
    // std::cout<<rakesh.health<<" "<<rakesh.level<<std::endl;
    // Hero *b=new Hero;

    // ramesh.health=44;
    // // ramesh.level="A";

    // ramesh.setlevel('a');
    // std::cout<<ramesh.getlevel()<<std::endl;

    // // (*b).health=45;
    // // (*b).setlevel('b');
    // // std::cout<<(*b).getlevel()<<(*b).health<<std::endl;

    // b->health=89;
    // b->setlevel('d');
    // std::cout<<(*b).getlevel()<<(*b).health<<std::endl;

    // Hero hero1(20,'A','ram');
    // hero1.print();

    Hero R("ram",33,'A');
    R.print();

    Hero S(R);
    S.print();


    
    
}