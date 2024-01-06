#include <iostream>

int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    int ans=power(a,b/2);

// even
    if(b%2==0){
        return ans*ans;
    }
    // odd
    else{
        return a*ans*ans;
    }
}


int main(){
    int a,b;
    std::cout<<"enter value of a"<<std::endl;
    std::cin>>a;
    std::cout<<"enter value of b"<<std::endl;
    std::cin>>b;

    std::cout<<power(a,b)<<std::endl;
}