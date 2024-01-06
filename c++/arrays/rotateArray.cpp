#include <iostream>
#include <vector>

void printArr(std::vector<int>arr){
    for(int i:arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

void rotate(std::vector<int>& nums,int k){
    int size=nums.size();
    std::vector<int> arr(size);


    // for(int i=0;i<size;i++){
    //     int temp=nums[i];
    //     arr[(i+k)%size]=temp;
    // }

    for(int i=0;i<size;i++){
        int val=((i+k)%size);
        std::cout<<val<<std::endl;
        int temp=nums[i];
        arr[val]=temp;


    }

    nums=arr;

    printArr(nums);
}

int main(){
    std::vector<int>arr={1,2,3,4,5,6,7};
    int k=3;
    rotate(arr,k);
}