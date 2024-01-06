#include <iostream>
#include <vector>

std::vector<int> spiralPrint(std::vector<std::vector<int>> arr){
    int row=arr.size();
    int col=arr[0].size();
    int total=row*col;
    // std::cout<<total;
    int count=0;

    int sr=0;
    int sc=0;
    int er=row-1;
    // std::cout<<er;
    int ec=col-1;
    std::vector<int> ans;

    while(count<total){
        //printing first row
        for(int i=sc;i<=ec && count<total;i++){
            ans.push_back(arr[sr][i]);
            count++;
        }
        // std::cout<<count;
        sr++;
        // std::cout<<sr<<" ";

        //printing last col
        for(int j=sr;j<=er && count<total;j++){
            ans.push_back(arr[j][ec]);
            count++;
        }
        // std::cout<<count;
        ec--;
        // std::cout<<ec<<" ";


        //printing last row
        for(int k=ec;k>=sc && count<total ;k--){
            ans.push_back(arr[er][k]);
            count++;
        }
        // std::cout<<count;
        er--;
        // std::cout<<er<<" ";


        //printing first col
        for(int h=er;h>=sr && count<total ;h--){
            ans.push_back(arr[h][sc]);
            count++;
        }
        // std::cout<<count;
        sc++;
        // std::cout<<sc<<" ";


    }

    return ans;

}

int main(){
    std::vector<std::vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    std::vector<int> ans=spiralPrint(arr);
    // spiralPrint(arr);

    // std::cout<<ans.size();

    for(int i=0;i<ans.size();i++){
        std::cout<<ans[i]<<" ";
    }
}