#include <iostream>
// #include <stdio.h>

void bubblesort(int arr[],int n){
    std::cout<<"bubblesort"<<std::endl;
};
void quicksort(int arr[],int n){
    std::cout<<"quicksort"<<std::endl;
};

void display(void (*funptr)(int [],int),int arr[],int n ){
    funptr(arr,n);
}


int main(){
    int ch;
    int arr[]={1,2,3,3,5,4};
    int n=6;

    std::cout<<"enter the number"<<std::endl;
    std::cin>>ch;

    if(ch==1){
        display(bubblesort, arr, n);
    }
    else if(ch==2){
        display(quicksort,arr,n);
    }
}