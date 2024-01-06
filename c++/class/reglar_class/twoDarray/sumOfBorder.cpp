#include <iostream>
#include <vector>

void sumB(std::vector<std::vector<int>> arr,int n,int m){
    // int sumc=0;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==0 || j==m-1 || i==0 || i==n-1){
                sum+=arr[i][j];
            }
            
        }
        // std::cout<<sumc<<" "<<sumr<<std::endl;
        
    }
    std::cout<<sum<<std::endl;
}


int main(){
    std::vector<std::vector<int>> arr={{1,2,3,4},{5,6,7,8},{4,3,2,1},{8,7,6,5}};
    sumB(arr,4,4);

}