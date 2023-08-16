#include <iostream>

int mEle(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }

        mid=(s+e)/2;

    }
    return s;
}

int main(){
    int arr[]={1,2,3,4,2};
    int ans=mEle(arr,5);
    std::cout<<ans<<std::endl;
}