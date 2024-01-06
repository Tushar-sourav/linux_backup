#include <iostream>
#include <string>
#include <algorithm>

void rev(std::string str){
    int e;
    int s=0;
    int size=str.length();
    for(int i=0;i<=size;i++){
        if(str[i]==' ' || str[i]=='\0'){
            e=i-1;
            while(s<=e){
                std::swap(str[s],str[e]);
                s++;
                e--;
            }
            s=i+1;
        }
    }

    for(int i=0;i<size;i++){
        std::cout<<str[i]<<" ";
    }
    std::cout<<std::endl;
}


int main(){
    std::string n="my name is ram";
    rev(n);
}