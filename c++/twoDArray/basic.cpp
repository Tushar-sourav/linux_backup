#include <iostream>


int main(){
    int arr[3][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            std::cin>>arr[j][i];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            std::cout<<arr[i][j]<<" ";
        }
    std::cout<<std::endl;
    }
}