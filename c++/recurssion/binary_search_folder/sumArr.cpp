#include <iostream>
#include <vector>

int sumArr(int *arr,int index){
    if(index==0){
        return arr[0];
    }
    
    int s=sumArr(arr,index-1);
    int sum=s+arr[index];
    return sum;
}

int main(){
    int arr[]={3,2,5,1,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int index=size-1;
    std::cout<<sumArr(arr,index);


}