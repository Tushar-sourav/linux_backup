#include <iostream>
using namespace std;


// printing array.
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// linear sorting
void sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
        }
    }
    printArray(arr,size);
}

int main(){
    // int arr[]={1,2,4,3,5};
    int arr[]={5,4,3,2,1};
    int size=5;
    sort(arr,size);

    // maximum and minimum elements.
    std::cout<<"minimum element is-->"<<arr[0]<<" "<<"maximum element is"<<arr[size-1]<<std::endl;
}