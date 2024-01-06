#include<iostream>

class baseClass {
    public:
        void start(){
            std::cout << "hello";
        }
};

class dClass : public baseClass {
    public:
        void start(){
            std::cout << "Hello ";
        }
};


int main(){
    dClass dc;
    dc.start();
}