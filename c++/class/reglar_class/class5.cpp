#include <iostream>
#include <vector>


void freq(std::vector<int>arr){
    int size=arr.size();
    std::vector<int>freq;
    int visited[size];
    for(int i=0;i<size;i++){
        int count=0;
        if(visited[i]!=1){
            
            for(int j=i;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                    visited[j]=1;
                }
            }
        }
        if(count!=0){
            std::cout<<arr[i]<<"-->"<<count;
        }
        
        std::cout<<std::endl;

        

        // int a=count;
        // if(a!=0){
        //     freq.push_back(a);
        // }
    }

    // for(int i:freq){
    //     std::cout<<i<<" ";
    // }


}

int main(){
    std::vector<int> arr={1,2,3,4,1,4};
    freq(arr);
}