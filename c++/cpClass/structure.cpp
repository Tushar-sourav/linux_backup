#include <iostream>

// struct students{
//     int rollno;
//     char name[20];
    
// };

// typedef struct companyProfile
// {
    
// }lora;

// int main(){
//     struct students s1,s2,s3;
//     s1.rollno=123;
//     fgets(s1.name,20,stdin);
// }


struct books{
    char author[20];
    char name[20];
    int price;
};

int main(){
    struct  books b1,b2;
     fgets(b1.author,20,stdin);
    fgets(b1.name,20,stdin);
    std::cin>>b1.price;
   std::cout<<b1.price;
     fgets(b2.author,20,stdin);
    fgets(b2.name,20,stdin);
    std::cin>>b2.price;
   std::cout<<b1.price;
}
