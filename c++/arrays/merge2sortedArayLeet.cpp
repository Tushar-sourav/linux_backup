#include <iostream>
#include <vector>
#include <algorithm>


void printArr(std::vector<int>arr){
    for(int i:arr){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}


// void merge(std::vector<int>nums1,std::vector<int>nums2){
//     std::vector<int>arr3;
//     int m=nums1.size();
//     int n=nums2.size();
//     int i=0,j=0;
//     while(i<m && j<n){
//          if(nums1[i]<=nums2[j]){
//             int temp=nums1[i];
//             arr3.push_back(temp);
//             i++;
//         }
//         // else if(nums1[i]==nums2[j]){
//         //     int temp=nums1[i];
//         //     arr3.push_back(temp);
//         //     i++;
//         //     j++;
//         // }
//         else if(nums1[i]>nums2[j]){
//             int temp=nums2[j];
//             arr3.push_back(temp);
//             j++;
//             std::cout<<j<<std::endl;
//         }
//     }

//     while(i<m){
//         std::cout<<i<<" ";
//         std::cout<<std::endl;
//         int temp=nums1[i];
//         arr3.push_back(temp);
//         i++;
//     }

//     while(j<n){
//         std::cout<<j<<" ";
//         std::cout<<std::endl;
//         int temp=nums2[j];
//         arr3.push_back(temp);
//         j++;
//     }

//     printArr(arr3);
//     int size3=arr3.size();

//     nums1.clear();
    

//     for(int i=0;i<size3;i++){
//         int temp=arr3[i];
//         if(temp!=0){
//             nums1.push_back(temp);
//         }
//     }

//     printArr(nums1);
// }


void merge(std::vector<int>nums1,int m,std::vector<int>nums2,int n){
    // std::vector<int>arr3;
    int p=m+n;
    // for(int i=0;i<m;i++){
    //     int temp=nums1[i];
    //     arr3.push_back(temp);
    // }
    // for(int j=0;j<n;j++){
    //     int temp=nums2[j];
    //     arr3.push_back(temp);
    // }

    
    // nums1.clear();
    // // int size=arr3.size();
    // std::sort(std::begin(arr3),std::end(arr3));

    // for(int k=0;k<p;k++){
    //     int temp=arr3[k];
    //     nums1.push_back(temp);
    // }
    // printArr(nums1);

    // int i=m,j=0;
    for(int i=m,j=0;i<p,j<n;i++,j++){
        nums1[i]=nums2[j];
    }

    std::sort(std::begin(nums1),std::end(nums1));

    printArr(nums1);

}

int main(){
    std::vector<int> nums1={-1,0,0,3,3,3,0,0,0};
    std::vector<int> nums2={1,2,2};
    merge(nums1,6,nums2,3);
}