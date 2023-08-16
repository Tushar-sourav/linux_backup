#include <iostream>
#include <vector>

// printing array.
void printArray(std::vector<int> arr){
    for(int i:arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

void sortDec(std::vector<int> arr){
    int size=arr.size();
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]<arr[j+1]){
                int k=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=k;
            }
        }
    }
    printArray(arr);
}

int main(){
    std::vector<int> arr={1,2,3,4,5};
    sortDec(arr);
}