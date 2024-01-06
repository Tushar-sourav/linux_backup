#include <iostream>
#include <vector>

bool isSorted(int *arr,int size){

    if(size==0 || size==1){
        return true;
    }
    else if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1,size-1);
    }
}

int main(){
    int arr[]={2,4,6,9,19,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    std::cout<<isSorted(arr,size)<<std::endl;
}