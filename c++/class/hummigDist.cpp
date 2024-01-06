#include <iostream>
#include <vector>

int hummingD(std::vector<int>arr1,std::vector<int>arr2){
    int size1=arr1.size();
    int size2=arr2.size();
    int count=0;
    if(size1==size2){
        for(int i=0;i<size1;i++){
            count++;
            }
        }
    }
    return count;
}

int main(){
    std::vector<int>arr1={0,0,0,1,1,0};
    std::vector<int>arr2={0,1,0,0,0,1};
    int ans=hummingD(arr1,arr2);
    std::cout<<ans<<std::endl;

}