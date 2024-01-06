#include <iostream>
#include <string.h>




void replaceSpace(std::string name){
    int size=name.length();
    std::string arr;
    // std::cout<<size;
    for(int i=0;i<size;i++){
        char ch=name[i];
        if(name[i]!=' '){
            // std::cout<<ch;
            arr.push_back(ch);
        }
        else{
            arr.append("@40");
        }
    }

    std::cout<<arr<<std::endl;
}

int main(){
    std::string name="my name is khan";
    // std::getline(std::cin,name);
    replaceSpace(name);
}