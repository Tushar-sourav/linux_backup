#include <iostream>
#include <array>
#include <vector>


void rotateK(std::vector<int> arr,int k){
    int size=arr.size();
    std::vector<int> rarr(size);

    for(int i=0;i<size;i++){
        int val=((i+k)%size);
        int temp=arr[i];
        rarr[val]=temp;
    }
    for(int j=0;j<size;j++){
        std::cout<<rarr[j];
    }
    std::cout<<std::endl;
}

void spiralPrint(std::vector<std::vector<int>>arr,int n,int k){
    int size=arr[0].size();
    // std::cout<<size<<std::endl;
    std::vector<int> newarr;
    int l=0;
    int top=0;
    int right=n-1;
    int bottom=n-1;

    while (l<=right && top<=bottom)
    {
        /* code */
    for(int i=l;i<=right;i++){
        std::cout<<arr[top][i];
        int a=arr[top][i];
        newarr.push_back(a);
    }
   
    top+=1;

    for(int i=top;i<=bottom;i++){
        std::cout<<arr[i][right];
        int a=arr[i][right];
        newarr.push_back(a);
    }
   
    right-=1;

    for(int i=right;i>=l;i--){
        std::cout<<arr[bottom][i];
        int a=arr[bottom][i];
        newarr.push_back(a);
    }
   
    bottom-=1;

    for(int i=bottom;i>=top;i--){
        std::cout<<arr[i][l];
        int a=arr[i][l];
        newarr.push_back(a);
    }
   
    l+=1;
    }

    std::cout<<std::endl;

    rotateK(newarr,k);
    
}

int main(){
    int k=3;
    std::vector<std::vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    spiralPrint(arr,3,k);

}