#include <iostream>
#include <vector>
#include <bitset>
#include <string>

int main(){
    std::string name;
    std::getline(std::cin,name);
    std::vector<std::vector<int>>arr;

    for (int i = 0; i < name.size(); ++i)
  {
      std::cout << std::bitset<10>(name.c_str()[i])<<std::endl;

  }
}