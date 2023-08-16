#include <iostream>

// int duplicate(int arr[],int size){
//     int sumA=0;
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sumA+=arr[i];
//     }

//     for(int i=0;i<size;i++){
//         sum+=i;
//     }

//     return (sumA-sum);
// }

// bitwise approach
int duplicate(int arr[],int size){
    int ans=0;
    //xor all elements.
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }

    // xor element with element upto n-1.
    for(int i=0;i<size;i++){
        ans=ans^i;
    }

    return ans;

}

int main(){
    int arr[]={1,2,3,4,3};
    int ans=duplicate(arr,5);
    std::cout<<ans<<std::endl;

}