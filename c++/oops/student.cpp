#include <iostream>


class Student{
    std::string name;
    int rollNo;
    int classStuding;
    int marks;

    public:

    Student(std::string name,int rollNo,int classStuding,int marks){
        this->name=name;
        this->rollNo=rollNo;
        this->classStuding=classStuding;
        this->marks=marks;
    }

    void grade(){
        int m=this->marks;

        if(m>90){
            std::cout<<this->name<<" your grades: A"<<std::endl;
        }
        else if(m>80){
            std::cout<<this->name<<" your grades: B"<<std::endl;
        }
        else if(m>70){
            std::cout<<this->name<<" your grades: c"<<std::endl;
        }
    }

};


int main(){
    Student s1("utsav",84,11,86);
    Student s2("pintu",92,11,93);


    s1.grade();
    s2.grade();

}