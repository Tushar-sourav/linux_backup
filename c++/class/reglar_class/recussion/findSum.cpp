#include <iostream>
#include <vector>

bool isSum(std::vector<int> arr,int size,int sum,int k,int index){
    if(sum==k){
        return true;
    }
    if(sum>k){
        return false;
    }
    if(index>size){
        return false;
    }

    return isSum(arr,size,sum,k,index+1) || isSum(arr,size,sum+arr[index],k,index+1);
}

int main(){
    std::vector<int> arr={3,7,1,2,1};
    int k=4;
    int sum=0;
    int size=arr.size();
    int  index=0;
    bool a=isSum(arr,size,sum,k,index);

    if(a==true){
        std::cout<<"possible"<<std::endl;
    }
    else{
        std::cout<<"not possible"<<std::endl;
    }
}