#include <iostream>

class StringManipulator{
    std::string str;

    public:
    StringManipulator(){};

    StringManipulator(std::string str){
        this->str=str;
    }

    bool operator >(StringManipulator other){
        return this->str >other.str;
    }


};

int main(){
    StringManipulator s1("name");
    StringManipulator s2("name is");

    std::cout<<(s2>s1)<<std::endl;
}