#include <iostream>
#include <vector>


void change(char *arr,int size){
    int s=0;
    int e=size-2;
    // std::cout<<size;
    while(s<e){
        // std::cout<<*(arr+s)<<arr[e];
        std::swap(arr[s],arr[e]);
        s++;
        e--;
    }

    //  for(int i=0;i<size;i++){
    //     std::cout<<arr[i]<<" ";
    // }
    // std::cout<<std::endl;

    int st=0;
    int ed=size-2;
    int a=st;
    
    while(st<=ed){
        if(arr[st]==' '){
            int sp=st-1;
            std::cout<<sp<<" "<<a;
            while(a<sp){
                std::swap(arr[a],arr[sp]);
                a++;
                sp--;
            }
            st++;
        }
        st++;
    }
    
    

}

int main(){
    char arr[]= "how are you";
    int n=sizeof(arr)/sizeof(arr[0]);
    change(arr,n);

    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

}