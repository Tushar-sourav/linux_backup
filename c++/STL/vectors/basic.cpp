#include <iostream>
#include <vector>

int main(){

    std::vector<int> arr= {1,2,3,4,5,6};
    // arr.pop_back();
    // arr.back();

    // for(int i=0;i<arr.size();i++){
    //     std::cout<<arr[i]<<" ";
    // }

    std::cout<<arr.front();
    std::cout<<arr.back();
    // std::cout<<arr.begin();
    std::cout<<arr.empty();

}