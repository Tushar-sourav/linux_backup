#include <iostream>
#include <vector>

int binarySearch(std::vector<std::vector<int>> arr,int k){
    int row=arr.size();
    int col=arr[0].size();

    int s=0;
    int e=(row*col)-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid/col][mid%col]==k){
            return 1;
        }
        else if(arr[mid/col][mid%col]<k){
            s=mid+1;
        }
        else if(arr[mid/col][mid%col]>k){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return 0;

}

int main(){
    std::vector<std::vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    std::cout<<binarySearch(arr,99);

}