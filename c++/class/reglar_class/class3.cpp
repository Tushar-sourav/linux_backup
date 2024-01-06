#include <iostream>
#include <vector>

std::vector<int> concat(std::vector<int> arr){
    std::vector<int> narr;
    int size=arr.size();
    for(int i=0;i<2*size;i++){
        int temp;
        if(i<size){
            temp=arr[i];
        }else{
            int j=i-size;
            temp=arr[j];
        }
        narr.push_back(temp);
    }
    // for(int i=0;i<size;i++){
    //     int temp=arr[i];
    //     narr.push_back(temp);
    // }

    // for(int i=0;i<2*size;i++){
    //     std::cout<<narr[i]<<" ";
    // }
    // std::cout<<std::endl;

    return narr;
    
}

int main(){
    std::vector<int> arr={1,2,1};
    int size=arr.size();
    
    std::vector<int> ans=concat(arr);
     for(int i=0;i<2*size;i++){
        std::cout<<ans[i]<<" ";
    }
    std::cout<<std::endl;

}