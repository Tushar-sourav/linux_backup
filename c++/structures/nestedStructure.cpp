#include <iostream> 
#include <vector>
#include <string.h>

typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;

typedef struct legendaryPokemon{
    pokemon normal;
    char ability[10];
}lpokemon;

typedef struct godPokemon{
    legendaryPokemon normal;
    int  hidden_ability;
}gpokemon;


int main(){
    legendaryPokemon mewto;
    strcpy(mewto.ability,"pressure");
    mewto.normal.attack=150;
    mewto.normal.hp=80;
    mewto.normal.speed=100;
    mewto.normal.tier='l';
    strcpy(mewto.normal.name,"mewto");

    gpokemon arcus;
    arcus.normal.normal.attack=200;
    arcus.normal.normal.hp=180;

}