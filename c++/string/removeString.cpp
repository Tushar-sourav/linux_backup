#include <iostream>
#include <string>


void removeSt(std::string name,std::string part){
    int size=name.length();
    while(size>0 && size>name.find(part)){
        name.erase(name.find(part),size);
    }
    std::cout<<name<<std::endl;
}


int main(){
    std::string name="daabcbaabcbc";
    removeSt(name,"abc");
    // std::cout<<name.find("abc")<<std::endl;

}