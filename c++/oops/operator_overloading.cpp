#include <iostream>

class ComplexNumber{
    public:
    int real;
    int imaginary;

    public:

    ComplexNumber (){
    }
    
    ComplexNumber(int real,int img){
        this->real=real;
        this->imaginary=imaginary;
    }
    
    ComplexNumber operator +(ComplexNumber other){
        ComplexNumber C;
        C.real=other.real+this->real;
        C.imaginary=other.imaginary+this->imaginary;

        return C;
    }

};

int main(){
    ComplexNumber c1(2,3);
    ComplexNumber c2(4,7);

    ComplexNumber c3=c1+c2;

    std::cout<<c3.real<<std::endl;



}