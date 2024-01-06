#include <iostream>
#include <string>

// struct pokemon{
//     int hp;
//     int speed;
//     int attack;
// }pikachu,cahrizard,bulbasaur;


// int main(){

//     // pokemon pikachu;
//     pikachu.hp=100;
//     pikachu.speed=120;
//     pikachu.attack=70;

//     // pokemon cahrizard;
//     cahrizard.hp=100;
//     cahrizard.speed=100;
//     cahrizard.attack=120;

//     // pokemon bulbasaur;
//     bulbasaur.hp=120;
//     bulbasaur.speed=70;
//     bulbasaur.attack=90;

//     std::cout<<pikachu.attack<<std::endl;


// }

// void change1(int *a, char *ch){
//     *a=4;
//     *ch='O';
// }

// void change2(int a, char ch){
//     a=4;
//     ch='O';
// }


// int main(){
//     int a=5;
//     char ch='A';
//     int * p1=&a;
//     char *p2=&ch;
//     // void(*pf)(int * ,char*) =&change1;

//     std::cout<<a<<ch<<std::endl;

//     change1(p1,p2);
//     // pf(p1,p2);

//     std::cout<<a<<ch<<std::endl;

// }

int vol(int *l,int *b,int *h){
    
}



typedef struct dim{
    int *height;
    int *lenght;
    int *width;
}dim;

int main(){
    int h=3 ,l=4,w=5;
    int *p1=&h;
    int *p2=&l;
    int *p3=&w;

    dim  *d;
   d->height=p1;
   d->lenght=p2;
   d->width=p3;

    int ans=vol(d->height,d->lenght,d->width);
    std::cout<<ans<<std::endl;

}