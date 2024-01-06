#include <stdio.h>
#include <string.h>
#include <iostream>




int main(){
    typedef struct student{
        std::string name;
        std::string dept;
        std:: string course;
        int rollno ,joing_year;

        void Data(std::string name,std:: string dept,
         std:: string course,int rollno,int joing_year){
            this->name =name;
            this->dept=dept;
            student::course=course;
            this->rollno=rollno;
            this->joing_year=joing_year;

         }
         

         void call(){
            printf("%s\t,%s\t,%s\t,%d\t,%d\n  ",name,dept,course,rollno,joing_year);
         }

         

         } student;


        


     student arr[2];
    for(int i=0 ;i<2;i++)
    {
        int rollno,joing_year;
        std::string name;std::string course;
        std::string dept;
        printf("enter the name:");
        std::cin>>name;
        printf("enter the dept:");
        std::cin>>dept;
        printf("enter the course:");
        std::cin>>course;
        printf("enter the rollno:");
        std::cin>>rollno;
        printf("enter the joing_year:");
        std::cin>>joing_year;


        for(int i=0; i<2;i++)
        arr[i].call();

    }


    };