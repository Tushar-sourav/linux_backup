#include <iostream>
#include <vector>

int piv(std::vector<int> arr){
    int size=arr.size();
    int s=0;
    int e=size-1;
    int mid=s+((e-s)/2);
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
    mid=s+((e-s)/2);
    }
    return s;
}

int main(){
    std::vector<int> arr={7,9,1,2,3};
    int ans=piv(arr);
    std::cout<<ans<<std::endl;

}