#include <iostream>
#include <vector>

int firstOcc(std::vector<int> arr,int s,int e,int k){
    if(s<e){
        int ans;
        int mid=s+(e-s)/2;

        if(arr[mid]==k){
           if(mid==0 || arr[mid-1]!=k){
            return mid;
           }
           else{
            return firstOcc(arr,s,mid-1,k);
           }
        }
        else if(arr[mid]<k){
            return firstOcc(arr,mid+1,e,k);
        }
        else{
            return firstOcc(arr,s,mid-1,k);
        }
    }

    return -1;
}

int lastOcc(std::vector<int> arr,int s,int e,int k){
    if(s<e){
        int ans;
        int mid=s+(e-s)/2;

        if(arr[mid]==k){
            if(mid==e || arr[mid+1]!=k){
                return mid;
            }
            else{
                return lastOcc(arr,mid+1,e,k);
            }
        }
        else if(arr[mid]<k){
            return lastOcc(arr,mid+1,e,k);
        }
        else{
            return lastOcc(arr,s,mid-1,k);
        }
    }
    
    return -1;
}


int main(){
    std::vector<int> arr={1,1,1,4,5,5};
    int s=0;
    int e=arr.size()-1;
    int k=4;
    std::cout<<lastOcc(arr,s,e,k)<<std::endl;
}