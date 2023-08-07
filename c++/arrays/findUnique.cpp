#include <iostream>
#include <array>
#include <vector>

// int unique(vector<int> arr){
    

//     return ans;
// }


int main(){
    std::vector<int> arr;
    int size;
    std::cin>>size;

    for(int i=0;i<size;i++){
        int temp;
        std::cin>>temp;
        arr.push_back(temp);
    }

    // for(auto& i:arr){
    //     std:: cout<<i<<" ";
    // }

    // unique

    int ans=0;
    for(int i:arr){
        ans=ans^i;
    }
    
    std:: cout<<ans<<std::endl;
    // int ans=unique(arr);
    // std::cout<<ans<<std::endl;

}