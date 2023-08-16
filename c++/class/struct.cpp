#include <iostream>

struct areaOfRect{
    float lenght;
    float brest;
    float radius;
};


typedef struct volOfCylinder{
    float radius;
    float height;
}cyl;

cyl v;



int main(){
    struct areaOfRect l;
    l.lenght=30;
    l.brest=20;
    l.radius=10;
    float areaR=l.lenght*l.brest;
    float areaC=3.14*l.radius*l.radius;
    std::cout<<areaR<<std::endl;
    std::cout<<areaC<<std::endl;

    // vol of cyl
    v.radius=10;
    v.height=20;
    std::cout<<3.14*v.radius*v.radius*v.height<<std::endl;

}







