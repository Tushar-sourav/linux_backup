#include <iostream>
#include <vector>

void sum(int a,int b){
    std::cout<<a+b<<std::endl;
}

void printArr(std::vector<int> arr){
    int size=arr.size();
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

void bubbleSort(std::vector<int> *arr){
    int size=arr.size();
    for(int i=0;i<size-1;i++){
        for(int j=i;j<size;j++){
            if(arr[j]>arr[j+1]){
                std::swap(arr[j],arr[j+1]);
            }
        }
    }

}

int main(){
    int a=3,b=9;
    std::vector<int> arr={1,2,3,4,5,6,7};
    // int (*ptr)(int,int)=&sum;
    // int ans=ptr(a,b);
    // std::cout<<ans<<std::endl;

    void (*ptr1)(std::vector<int> *)=&printArr;
    // ptr1(arr);

    void (*ptr2)(std::vector<int>)=&bubbleSort;

    ptr2(arr);
    ptr1(arr);

    


    

}