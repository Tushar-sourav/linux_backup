#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

void printArr(std::vector<int>arr){
    for(int i:arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}


void merge(std::vector<int>arr1,std::vector<int>arr2){
    std::vector<int>arr3;
    int size1=arr1.size();
    int size2=arr2.size();
    int i=0,j=0;
    while(i<size1 && j<size2){
         if(arr1[i]<arr2[j]){
            int temp=arr1[i];
            arr3.push_back(temp);
            i++;
        }
        else if(arr1[i]==arr2[j]){
            int temp=arr1[i];
            arr3.push_back(temp);
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j]){
            int temp=arr2[j];
            arr3.push_back(temp);
            j++;
        }
    }

    while(i<size1){
        // std::cout<<i<<" ";
        // std::cout<<std::endl;
        int temp=arr1[i];
        arr3.push_back(temp);
        i++;
    }

    while(j<size2){
        // std::cout<<i<<" ";
        // std::cout<<std::endl;
        int temp=arr2[i];
        arr3.push_back(temp);
        j++;
    }

    printArr(arr3);
}

int main(){
    std::vector<int>arr1={1,3,4,5,8,9};
    std::vector<int>arr2={2,5,6,7};
    merge(arr1,arr2);
}