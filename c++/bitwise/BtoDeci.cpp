#include <iostream>

int binToDeci(int n){
    int dec=0;
    while(n!=0){
        int a=n%2;
        dec=dec*10+a;
        // std::cout<<dec<<std::endl;

        n=n/2;
    }
    return dec;
}

int main(){
    int a=2;
    int ans=binToDeci(a);
    std::cout<<ans<<std::endl;

}