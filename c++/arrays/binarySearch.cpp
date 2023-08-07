#include <iostream>

int bSearch(int arr[],int size,int k){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int arr[13]={1,2,2,2,2,2,2,2,2,2,6,33,89};
    int ans=bSearch(arr,13,2);
    std::cout<<ans<<std::endl;

}