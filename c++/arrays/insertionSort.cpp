#include <iostream>
#include <vector>

void printArr(std::vector<int>arr){
    for(int i:arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

void insertionSort(std::vector<int>arr){
    int size=arr.size();
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    printArr(arr);
}

int main(){
    std::vector<int>arr={1,4,2,77,2,4};
    insertionSort(arr);
}