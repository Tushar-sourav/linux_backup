#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateNine(vector<vector<int>> &arr){

    // transpose
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }


    // row reverse
    for(int i=0;i<arr.size();i++){
        reverse(arr[i].begin(),arr[i].end());
    }


}

int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};

    rotateNine(arr);

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}