#include <iostream>
#include <map>
#include <list>
using namespace std;

int main(){
    map<string,list<string>> pokedex;

    list<string> pikachuAttack={"thunder","iron tail","quick attack"};
    list<string> charmanderAttack={"flamethorwer","iron tail","scary face"};
    list<string> bulbasourAttack={"leaf attact","seed attack","wip"};


   pokedex.insert(pair<string,list<string>> ("Pikachu",pikachuAttack));
   pokedex.insert(pair<string,list<string>> ("Charmander",charmanderAttack));
   pokedex.insert(pair<string,list<string>> ("Balbasaour",bulbasourAttack));

   for(auto i:pokedex){
     cout<<i.first<<"--";
     for(auto j:i.second){
        cout<<j<<" ";
     }
     std::cout<<endl;
   }
}