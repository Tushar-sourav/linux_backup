#include <iostream>
using namespace std;

template<class T>
class interchange{
    public:
    T a;
    T b;
    // public:

    interchange(T a ,T b){
        this->b=a;
        this->a=b;
    }

    // void change
};

int main(){
    interchange<int> a1(5,8);
    std::cout<<a1.a;

}