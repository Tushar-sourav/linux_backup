#include <iostream>


bool isPresent(int arr[][4],int row,int col,int target){
        for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[j][i]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            std::cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            std::cout<<arr[i][j]<<" ";
        }
    std::cout<<std::endl;
    }

    int target;
    std::cin>>target;

    if(isPresent(arr,3,4,target)){
        std::cout<<"present"<<std::endl;
    }
    else{
        std::cout<<"not present"<<std::endl;
    }
}
