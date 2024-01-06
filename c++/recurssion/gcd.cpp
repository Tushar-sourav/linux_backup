#include <iostream>



int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    else{
        return gcd(a%b,b);
    }
}






int main(){
    int a=4;
    int b=2;
    int g;

    if(a>b){
         g=gcd(a,b);
    }
    else{
         g=gcd(b,a);
    }

    int ans=(a*b)/g;
    std::cout<<ans;



    // std::cout<<lcm(2,4)<<std::endl;

    // std::cout<<gcd(a,b)<<std::endl;

}