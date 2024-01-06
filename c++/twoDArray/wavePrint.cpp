#include <iostream>


void wavePrint(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                std::cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                std::cout<<arr[j][i]<<" ";
            }
        }
        // std::cout<<std::endl;
    }
}


int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    wavePrint(arr,3,3);

}