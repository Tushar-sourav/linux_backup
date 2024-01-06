#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixMultiplication(vector<vector<int>> arr1,vector<vector<int>> arr2){
    int r1=arr1.size();
    int r2=arr2.size();

    int c1=arr1[0].size();
    int c2=arr2[0].size();

    vector<vector<int>> ans;

    if(c1==r2){
        for(int i=0;i<r1;i++){
            vector<int> temp;
            for(int j=0;j<c2;j++){
                int sum=0;
                for(int k=0;k<c1;k++){
                    sum+=arr1[k][i]*arr2[k][j];
                }
                temp.push_back(sum);
            }
            ans.push_back(temp);
        }
    }
    else{
        cout<<"not possible"<<endl;
    }

    return ans;

}

int main(){
    vector<vector<int>> arr1={{1,2},{1,2}};
    vector<vector<int>> arr2={{1,2},{1,2}};

    vector<vector<int>> ans=matrixMultiplication(arr1,arr2);

}