#include <iostream>

typedef struct student{
    int rollno;
    int dob;
}student;

int main(){
    student s1,s2;

    student *ptr1= &s1;
    student *ptr2= &s2;
    // std::cout<<ptr<<std::endl;
    (*ptr1).rollno=101;
    ptr1->dob=22;

    (*ptr2).rollno=102;
    (*ptr2).dob=11;

    std::cout<<s1.rollno<<std::endl;
}