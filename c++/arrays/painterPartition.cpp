#include <iostream>
#include <vector>

bool isPossible(std::vector<int>arr,int n,int k,int mid){
    int painterCount=1;
    int time=0;

    for(int i=0;i<n;i++){
        if(time+arr[i]<=mid){
            time+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount>k || arr[i]>mid){
                return false;
            }
            time=arr[i];
        }

    }
    return true;
}


int minTime(std::vector<int>arr,int k,int n){
    int sum=0;
    for(int i:arr){
        sum+=i;
    }

    int s=0;
    int e=sum;
    int mid=s+((e-s)/2);
    int ans=-1;
    // std::cout<<isPossible(arr,n,k,mid)<<std::endl;

    while(s<e){
        if(isPossible(arr,n,k,mid)){
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
    std::vector<int> arr={1,2,3,4};
    int ans=minTime(arr,2,4);
    std::cout<<ans<<std::endl;

}