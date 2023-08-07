#include <iostream>
#include <limits.h>


int main(){
    int a1[]={1,2,3,4,5,9,9};
    int a2[]={10,21,92};

    bool flag=false;

    for(int i=0;i<7;i++){
        for(int j=0;j<3;j++){
            if(a1[i]==a2[j]){
                std::cout<<a1[i]<<" ";
                a2[j]=INT_MIN;
                flag=true;
                break;
            }
        }
    }

    if(flag==false){
        std::cout<<"0"<<std::endl;
    }
}