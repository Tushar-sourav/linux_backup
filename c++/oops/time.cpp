#include <iostream>

class Time{
    public:
    int hr;
    int min;
    int sec;

    Time(int hr,int min,int sec){
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }

    void display(){
        std::cout<<hr<<":"<<min<<":"<<sec<<std::endl;
    }

    Time operator + (Time inp){
        int nhr,nmin,nsec;

        nsec=sec+inp.sec;
        nmin=min+inp.min;
        nhr=hr+inp.hr;

        nsec%=60;
        nmin%=60;
        nhr%=60;

        return Time(nhr,nmin,nsec);
    }
};


int main(){
    Time t1(4,50,3);
    t1.display();

    Time t2(3,20,51);
    t2.display();

    Time t3=t1+t2;
    t3.display();
}