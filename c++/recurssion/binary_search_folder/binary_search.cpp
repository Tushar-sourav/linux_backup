#include <iostream>

int64_t binarySearch(int *arr,int s,int e, int k){
    int mid=s+(e-s)/2;

    if(s>e){
        return -1;
    }
    if(arr[mid]==k){
        return mid;
    }

    if(arr[mid]<k){
        return  binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}

int main(){
    int arr[]={2,4,6,10,14,18};
    int s=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    int e=size-1;
    int k=18;
    
    std::cout<<binarySearch(arr,s,e,k)<<std::endl;
}