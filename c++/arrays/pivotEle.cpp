#include <iostream>
#include <vector>

int pivotE(std::vector<int> arr){
    int size=arr.size();
    int sum=0;
    for(int i:arr){
        sum+=i;
    }

    int ls=0;
    int rs=sum;

    for(int i=0;i<size;i++){
            rs-=arr[i];
        if(ls==rs){
            return i;
        }
        else if(ls<rs){
            // std::cout<<ls<<" "<<rs<<std::endl;
            ls+=arr[i];

        }
        else{
            break;
        }
    }
    return -1;
}

int main(){
    std::vector<int> arr={1,7,3,6,5,6};
    int ans=pivotE(arr);
    std::cout<<ans<<std::endl;

}