#include <iostream>

class complex{
    public:
    int real;
    int imaginary;

    public:

    complex(int real,int img){
        this->real=real;
        this->imaginary=img;
    }

    complex operator ++(){
        return complex(++real,++imaginary);
    }

    complex operator ++(int){
        return complex(++real,++imaginary);
    }


};

int main(){
    complex c1(2,3);

    complex c2=++c1;
    complex c3=c1++;
    std::cout<<c2.real;
    std::cout<<c3.real;
}