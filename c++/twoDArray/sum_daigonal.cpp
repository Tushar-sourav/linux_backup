#include <iostream>

int sumDaigonal(int arr[][3],int row, int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i+j==2 || i==j){
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}


int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    std::cout<<sumDaigonal(arr,3,3);
}