#include <iostream>
#include <string.h>


// class abc{
//     int a;
//     static int b;
//     public:
//     void init(int i,int j){
//         a=i;
//         b=j;
//     }
//     void show(){
//         std::cout<<a<<" "<<b<<std::endl;
//     }
// };int abc::b;


// int main(){
//     abc s1,s2;
//     s1.init(1,2);
//     s1.show();
//     s2.init(10,30);
//     s2.show();
//     s1.show();
// }


class bank{
    std::string name;
    int bal;
    static int totalBal;

    public:
    void init(std::string n,int num){
        name=n;
        bal=num;
        totalBal+=bal;
    }

    void deposit(int amt){
        bal+=amt;
        totalBal=+bal;
    }

    void withdraw(int amt){
        bal-=amt;
        totalBal-=amt;
    }

    void show(){
        std::cout<<name<<" "<<bal<<" "<<totalBal<<std::endl;
    }
}; int bank::totalBal;


int main(){
    bank c1,c2;
    c1.init("ram",300);
    c1.show();
    c1.deposit(200);
    c1.show();
    c1.withdraw(100);
    c1.show();

    c2.init("utsav",400);
    c2.show();
}

