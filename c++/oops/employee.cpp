#include <iostream>

class Employee{
    std::string name;
    int empId;
    int salary;

    public:

    void setSalary(int rank){
        switch(rank)
        {
        case 1:this->salary=10000;
            break;
        case 2:this->salary=5000;
            break;
        case 3:this->salary=1000;
            break;
        default:
            break;
        }
    }

    void showSalary(){
        std::cout<<"your salary is: Rs"<<this->salary<<std::endl;
    }
};


int main(){
    Employee e1 ,e2;

    e1.setSalary(1);
    e2.setSalary(2);

    e1.showSalary();
    e2.showSalary();
}