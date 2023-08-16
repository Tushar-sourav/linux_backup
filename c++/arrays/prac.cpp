#include <iostream>
#include <vector>
#include <set>

void freq(std::vector<int>arr){
    int size=arr.size();
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
        std::cout<<arr[i]<<"-->"<<count;
        std::cout<<std::endl;
    }
}

int main(){
    std::vector<int>arr={1,1,1,2,3,4};
    freq(arr);
}