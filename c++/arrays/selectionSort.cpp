#include <iostream>
#include <vector>

void printArr(std::vector<int>arr){
    for(int i:arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}


void selectionSort(std::vector<int>arr){
    int size=arr.size();
    for(int i=0;i<size-1;i++){
        int minInd=i;
        for(int j=i+1;j<size;j++){
            if(arr[minInd]>arr[j]){
                minInd=j;
            }
        }
        std::swap(arr[minInd],arr[i]);
    }

    printArr(arr);
}

int main(){
    std::vector<int>arr={1,7,9,2,3,0};
    selectionSort(arr);
}