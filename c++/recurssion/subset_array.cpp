#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> arr,vector<int> output,int index,vector<vector<int>> &ans){
    if(index>=arr.size()){
        ans.push_back(output);
        return;
    }

    // exclude
    solve(arr,output,index+1,ans);

    // include
    int ele=arr[index];
    output.push_back(ele);
    ans.push_back(output);
    solve(arr,output,index+1,ans);

}

vector<vector<int>> subsetArr(vector<int> arr){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(arr,output,index,ans);

}

int main(){
    vector<int> arr={1,2,3,4};
    vector<vector<int>> ans=subsetArr(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}