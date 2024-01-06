#include <iostream>
#include <string>
#include <vector>

typedef struct cricketer
{
    std::string fname;
    std::string lname;
    int age;
    int no_Matches;
    float average;
}cricketer;


int main(){

    cricketer cric[20];
    for(int i=0;i<2;i++){
        std::cout<<"enter first name--->";
        std::cin>>cric[i].fname;
        std::cout<<"enter last name--->";
        std::cin>>cric[i].lname;
        std::cout<<"enter age-->";
        std::cin>>cric[i].age;
        std::cout<<"enter no of matches-->";
        std::cin>>cric[i].no_Matches;
        std::cout<<"enter average-->";
        std::cin>>cric[i].average;

    }

    for(int i=0;i<2;i++){
        std::cout<<cric[i].fname+cric[i].lname<<std::endl;
        std::cout<<"age:"<<cric[i].age<<std::endl;
        std::cout<<"no of matches:"<<cric[i].no_Matches<<std::endl;
        std::cout<<"battting avg:"<<cric[i].average<<std::endl;
    }

}