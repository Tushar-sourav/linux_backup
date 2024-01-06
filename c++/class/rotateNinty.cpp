// transpose and then reverse each row
#include <iostream>

void rotate(int arr[][3],int n,int m){
    int narr[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            narr[j][i]=arr[i][j];
        }

    }

    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            std::cout<<narr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    rotate(arr,3,3);
}