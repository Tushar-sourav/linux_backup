#include <iostream>
using namespace std;

// void reverseArr(int array[],int size){
//     int firstEle;
//     int lastEle;
//     for(int i=0;i<size/2;i++){
//         firstEle=array[i];
//         array[i]=array[size-i-1];
//         array[size-i-1]=firstEle;

//     }
// }

//another approach.
void reverseArr(int arr[],int size ){
    int start=0;
    int end=size-1;

    while(start<end){
        int k= arr[start];
        arr[start]=arr[end];
        arr[end]=k;
        start++;
        end--;
    }
}

int main(){
    int arr[10];
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    reverseArr(arr,size);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}