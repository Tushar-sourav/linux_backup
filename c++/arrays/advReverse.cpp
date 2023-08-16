#include <iostream>
#include <vector>
#include <algorithm>

void printArr(std::vector<int>arr){
    for(int i:arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}

void advReverse(std::vector<int>arr,int m){
    int s=m+1;
    int e=arr.size()-1;
    while(s<e){
        std::swap(arr[s],arr[e]);
        s++;
        e--;
    }

    printArr(arr);
}


int main(){
    std::vector<int>arr={1,2,3,4,5,6,7};
    advReverse(arr,0);
}