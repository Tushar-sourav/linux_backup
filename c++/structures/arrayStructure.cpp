#include <iostream>
#include <vector>
#include <array>
#include <string.h>

typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    std::string name;
}pokemon;

int main(){
    pokemon arr[3];

    arr[0].attack=50;
    arr[0].hp=40;
    arr[0].speed=60;
    arr[0].tier='A';
    arr[0].name="pikachu";

    arr[1].attack=70;
    arr[1].speed=60;
    arr[1].tier='B';
    arr[1].hp=40;
    arr[1].name="balbasaur";


    arr[2].attack=60;
    arr[2].hp=90;
    arr[2].speed=60;
    arr[2].tier='A';
    arr[2].name="cahrizard";

    for(int i=0;i<3;i++){
        std::cout<<arr[i].name<<std::endl;
        std::cout<<"attack:"<<arr[i].attack<<" ";
        std::cout<<"hp:"<<arr[i].hp<<" ";
        std::cout<<"speed"<<arr[i].speed<<" ";
        std::cout<<"tier"<<arr[i].tier<<" ";
        std::cout<<std::endl;

    }




}



