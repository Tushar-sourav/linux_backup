#include <iostream>
#include <array>

void spiralPrint(int arr[][3],int n,int m){
    int l=0;
    int top=0;
    int right=m-1;
    int bottom=n-1;

    while (l<=right && top<=bottom)
    {
        /* code */
    for(int i=l;i<=right;i++){
        std::cout<<arr[top][i];
    }
   
    top+=1;

    for(int i=top;i<=bottom;i++){
        std::cout<<arr[i][right];
    }
   
    right-=1;

    for(int i=right;i>=l;i--){
        std::cout<<arr[bottom][i];
    }
   
    bottom-=1;

    for(int i=bottom;i>=top;i--){
        std::cout<<arr[i][l];
    }
   
    l+=1;
    }
    
   
    


}

int main(){
    int arr[][3]={1,2,3,4,5,6,7,8,9};
    spiralPrint(arr,3,3);

}