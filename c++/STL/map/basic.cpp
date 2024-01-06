#include <iostream>
#include <map>
#include <string>
// using namespace std;

int main(){
   std::map<std::string,std::string> mytranlater;

    mytranlater.insert(std::pair<std::string,std::string>("mango","aam"));
    mytranlater.insert(std::pair<std::string,std::string>("guava","amrood"));
    mytranlater.insert(std::pair<std::string,std::string>("banana","kela,lele mera"));
    mytranlater.insert(std::pair<std::string,std::string>("apple","sheeb"));

    mytranlater["mango"]="bambaiya aam";
    // mytranlater.clear();
    std::cout<<mytranlater.size();

    for(auto i: mytranlater){
        std::cout<<i.first<<"--"<<i.second<<std::endl;
    }


}