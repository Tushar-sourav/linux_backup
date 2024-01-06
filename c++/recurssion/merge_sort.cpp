#include <iostream>
using namespace std;


void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    int *first= new int[len1];
    int *second= new int[len2];

    int mainIdx=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainIdx];
    }

    mainIdx=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainIdx];
    }

    int index1=0;
    int index2=0;
    mainIdx=s;

    

    

    
}

void mergeSort(int *arr,int s,int e){
    if(s<=e){
        return;
    }

    int mid=s+(e-s)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){
    int arr[]={1,3,2,5,4,7,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=size-1;

}