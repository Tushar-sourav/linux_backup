#include <iostream>
#include <list>



class user{
    public:
    virtual void func(){
        std::cout<<"hi users"<<std::endl;
    }

};

class superUser:public user{
    public:
    void func(){
        std::cout<<"hi super users"<<std::endl;
    }
};

int main(){
    user u1;
    superUser s1;

    user * ptr= &u1;
    user * ptr1=&s1;

    ptr->func();
    ptr1->func();

    // std::list<user*> userl;
    // userl.push_back(&u1);
    // userl.push_back(&s1);

    // for(user *ptr:userl){
    //     ptr->func();
    // }







}