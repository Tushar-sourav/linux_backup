#include <iostream>

class fruit{
    protected:
    int numfruit;
    public:
    static int totalF;

    public:

    fruit(){
        numfruit=0;
    }

    void addBasket(int num){
        this->numfruit+=num;
        totalF+=num;
    }

    int getfruit(){
        return numfruit;
    }
};

int fruit:: totalF=0;

class Apple :public fruit{
    public:
    void addApple(int count){
        addBasket(count);
    }

    int getApple(){
        return getfruit();
    }
};

int main(){

    fruit f1,f2;
    Apple a1;
    a1.addApple(5);
    f1.addBasket(10);
    f2.addBasket(10);
    std::cout<<f1.getfruit();
    std::cout<<a1.getApple();
    std::cout<<a1.getfruit();
    std::cout<<fruit::totalF;


}