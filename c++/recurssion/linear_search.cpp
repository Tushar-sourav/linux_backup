#include <iostream>

bool linearSearch(int * arr,int size,int k){
    if(arr[0]==k){
        return true;
    }
    if(size==0){
        return false;
    }

    return linearSearch(arr+1,size-1,k);
}


int main(){
    int arr[]={3,5,1,2,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k=9;
    std::cout<<linearSearch(arr,size,k)<<std::endl;
}