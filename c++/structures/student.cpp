#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <array>


// using namespace std;

typedef struct students{
    std::string name;
    int roll_no;
    std::string address;
}students;

void checkdepart(students s1,students s2){
    if(s1.address==s2.address){
        std::cout<<"same address"<<std::endl;
    }
}



int main(){
    students arr[2];
    
    for(int i=0;i<2;i++){
        std::cout<<"enter name";
        // std::getline(std::cin,arr[i].name);
        std::cin>>arr[i].name;
        std::flush(std::cout);
        // std::cout<<std::endl;
        std::cout<<"enter adress";
        // std::getline(std::cin,arr[i].address);
        std::cin>>arr[i].address;
        std::flush(std::cout);
        std::cout<<"enter rollno";
        std::cin>>arr[i].roll_no;
        std::flush(std::cout);
    }

    // std::cout<<arr[1].address<<std::endl;

    // for(int i=0;i<2;i++){
    //     std::cout<<arr[i].name<<" ";
    //     std::cout<<arr[i].address<<" ";
    //     std::cout<<arr[i].roll_no<<" ";
    //     std::cout<<std::endl;

    // }

    checkdepart(arr[0],arr[1]);

}