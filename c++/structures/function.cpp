#include <iostream>

typedef struct  pokemon{
    int hp;
    int attack;
    int speed;
    char name;
}pokemon;

void fun(pokemon p){
    std::cout<<p.attack<<std::endl;
}



int main(){
    pokemon p;
    p.attack=90;
    fun(p);
}