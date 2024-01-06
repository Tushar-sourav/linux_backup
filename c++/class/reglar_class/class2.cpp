#include <iostream>
#include <string.h>

int main(){
;
    std::string st;
    std::cin>>st;
    std::flush(std::cout);
    int n;
    std::cin>>n;
    int a=(2*n)+1;
    int size=st.size();
    int len=size+2*n;

    for(int i=0;i<a;i++){
        for(int j=0;j<len;j++){
            if(i==0 || j==0 || i==a-1 || j==len-1){
                std::cout<<"*";
            }
            else if(j==n+1 && i==n+1){
                std::cout<<st;
            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }




    std::cout<<len<<std::endl;
}