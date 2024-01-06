#include <iostream>

int getSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}


int main(){
    int row;
    int col;
    std::cin>>row;
    std::cin>>col;
    int **arr=new int *[row];

    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

// taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            std::cin>>arr[i][j];
        }
    }

// printing
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    // freeing the heap
    for(int i=0;i<row;i++){
        delete [] arr[i];
    } 

    delete []arr;
    
    
}