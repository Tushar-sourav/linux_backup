#include <iostream>
#include <vector>

int piv(std::vector<int>arr){
    int size=arr.size();
    int s=0;
    int e=size-1;
    int mid=s+((e-s)/2);

    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+((e-s)/2);
    }
    return s;

}

int binarySearch(std::vector<int>arr,int s,int e,int k){
    // int size=arr.size();
    // int s=0;
    // int e=size-1;
    int mid=s+((e-s)/2);

    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+((e-s)/2);
    }
    return -1;
}

int rotatedArrSearch(std::vector<int>arr,int k){
    int pivot=piv(arr);
    // std::cout<<pivot<<std::endl;
    int size=arr.size();
    int e=size-1;
    int ans=-1;

    if(arr[pivot]<=k<=arr[e]){
        ans=binarySearch(arr,pivot,e,k);
    }
    else{
        ans=binarySearch(arr,0,pivot-1,k);
        // std::cout<<ans<<std::endl;
    }

    return ans;
}


int main(){
    std::vector<int> arr1={7,9,1,2,3};
    // std::vector<int> arr2={1,2,3,7,9};
    int k=9;
    int ans=rotatedArrSearch(arr1,k);
    std::cout<<ans<<std::endl;
}