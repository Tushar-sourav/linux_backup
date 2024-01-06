#include <iostream>
#include <vector>

void printArr(std::vector<int>arr){
    for(int i:arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

void moveZero(std::vector<int>arr){
    int size=arr.size();
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            std::swap(arr[i],arr[j]);
            j++;
        }
    }

    printArr(arr);
}

int main(){
    std::vector<int>arr={0,1,0,3,12,0};
    moveZero(arr);
}