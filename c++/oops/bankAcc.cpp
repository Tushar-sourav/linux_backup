#include <iostream>

class BankAccount{
    int accNo=101;
    int balance;

    public:

    void setbalance(int balance){
        this->balance=balance;

    }

    void deposit(int amount){
        this->balance=this->balance+amount;
    }

    void withdraw(int amount){
        this->balance=this->balance-amount;
    }

    void viewBalance(){
        std::cout<<this->balance<<std::endl;
    }

};


int main(){
    BankAccount a1;
    a1.setbalance(500);
    a1.withdraw(300);
    a1.deposit(100);

    a1.viewBalance();



}