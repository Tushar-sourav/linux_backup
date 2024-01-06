#include <iostream>
#include <vector>

void bbS(std::vector<int> &arr,int size){
    if(size==0 || size==1){
        return;
    }

    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            std::swap(arr[i],arr[i+1]);
        }
    }

    bbS(arr,size-1);
    

}


int main(){
    std::vector<int> arr={1,2,3,7,5,6};
    int size=arr.size()-1;
    bbS(arr,size);

    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<std::endl;
    }
}