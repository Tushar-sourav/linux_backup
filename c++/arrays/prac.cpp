#include <iostream>
#include <vector>
#include <set>

void isUnique(std::vector<int>freq){
    int size=freq.size();
    bool flag=true;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(freq[i]==freq[j]){
                // std::cout<<"no"<<std::endl;
                // std::cout<<"f";
                flag=false;
                break;
            }
        }
    }
    if(flag==true){
        std::cout<<"yes"<<std::endl;
    }
    else{
        std::cout<<"no"<<std::endl;
    }
}

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
        // std::cout<<arr[i]<<"-->"<<count;
        // std::cout<<std::endl;
        int a=count;
        if(a!=0){
            freq.push_back(a);
        }
    }

    for(int i:freq){
        std::cout<<i<<" ";
    }

    isUnique(freq);


}



int main(){
    std::vector<int>arr={1,1,1,2,3,3,4,4,4,4};
    freq(arr);
}