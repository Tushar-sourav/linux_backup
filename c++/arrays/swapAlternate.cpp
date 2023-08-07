#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[],int size){
    // int first=0;
    // int second=first+1;

    // while(second<size){
    //     int k=arr[first];
    //     arr[first]=arr[second];
    //     arr[second]=k;
    //     first+=2;
    //     second+=2;
    // }

    for(int i=0;i<size;i+=2){
        if(i+1<size){
            int k=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=k;
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5,6};
    swapAlternate(arr,6);
    printArray(arr,6);

}