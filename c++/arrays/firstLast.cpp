#include <iostream>

int firstOcc(int arr[],int size,int k){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int lastOcc(int arr[],int size,int k){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans;
    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main(){
    int arr[]={-1,0,2,2,2,2,3};
    int ans1=firstOcc(arr,7,2);
    int ans2=lastOcc(arr,7,2);
    std::cout<<ans1<<std::endl;
    std::cout<<ans2<<std::endl;

    std::cout<<"total no of 2-->"<<((ans2-ans1)+1)<<std::endl;
    

}