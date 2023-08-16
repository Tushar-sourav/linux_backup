#include <iostream>
#include <vector>

bool isPossible(std::vector<int> arr,int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBook(std::vector<int> arr,int n,int m){
    int sumA=0;
    for(int i:arr){
        sumA+=i;
    }

    int s=0;
    int e=sumA;
    // std::cout<<e<<std::endl;
    int ans=-1;
    int mid=s+((e-s)/2);

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+((e-s)/2);
    }
    return ans;

}

int main(){
    std::vector<int> arr ={10,20,30,40};
    int n=4;
    int m=2;
    int ans=allocateBook(arr,n,m);
    std::cout<<ans<<std::endl;
}