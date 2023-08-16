#include <iostream>
#include <vector>

void printArr(std::vector<int>arr){
    for(int i:arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

void bubleSort(std::vector<int>arr){
    int size=arr.size();
    for(int i=0;i<size-1;i++){
        bool temp =false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j+1]<arr[j]){
                std::swap(arr[j],arr[j+1]);
                temp=true;
            }
        }
        if(temp==false){
            break;
        }
    }
    printArr(arr);

}

int main(){
    std::vector<int>arr={1,4,6,3,4,99,9};
    bubleSort(arr);
}