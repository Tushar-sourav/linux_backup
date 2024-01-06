#include <iostream>


int  sumOa(int arr[][3],int row,int col){
    int sumRow[row];
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }

        sumRow[i]=sum;
        std::cout<<sum<<std::endl;
    }

    int max=0;
    int r=0;
    for(int k=0;k<row;k++){
        if(sumRow[k]>max){
            max=sumRow[k];
            r=k;
        }
    }

    return r;
}   




int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    std::cout<<"max sum is"<<sumOa(arr,3,3);
}