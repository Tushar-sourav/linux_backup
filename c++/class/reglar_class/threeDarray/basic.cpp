#include <iostream>
#include <array>
#include <string>

int main(){
    int d=2;
    int r=2;
    int c=2;
    std::string toFind="ram";
    std::cout<<"to find element-->"<<toFind<<std::endl;
    bool flag=false;

    std::string empName[d][r][c];

    for(int k=0;k<d;k++){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                std::cout<<"element at ["<<k<<"]["<<i<<"]["<<k<<"]--->";
                std::cin>>empName[k][i][j];
            }
        }
    }


    for(int k=0;k<d;k++){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                // std::cout<<"element at ["<<k<<"]["<<i<<"]["<<k<<"]--->";
                std::cout<<empName[k][i][j]<<" ";
            }
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
    }

    for(int k=0;k<d;k++){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                // std::cout<<"element at ["<<k<<"]["<<i<<"]["<<k<<"]--->";
                // std::cout<<empName[k][i][j]<<" ";
                if(empName[k][i][j]==toFind){
                    flag=true;
                    break;
                }
            }
            // std::cout<<std::endl;
        }
        // std::cout<<std::endl;
    }


    if(flag==true){
        std::cout<<"yes present"<<std::endl;
    }
    else{
        std::cout<<"not present"<<std::endl;
    }



}