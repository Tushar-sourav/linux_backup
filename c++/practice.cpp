#include <iostream>
#include <set>
#include <vector>
#include <array>
using namespace std;

vector<int> printArray(vector<int> some_vector){
    return some_vector;
}

void duplicate(int arr[],int size){
    set<int> nArr;
    for(int i=0;i<size;i++){
        nArr.insert(arr[i]);
    }
    

    for(int i:nArr){
        int count=1;
        for(int j=0;j<size;j++){
            if(i==arr[j]){
                count++;
            }
        }
        cout<<i<<"-->"<<count<<endl;
    }
    cout<<endl;
}



int main(){
     int newArray[]={1,2,3,4,1,3,4};

    duplicate(newArray,4);

    array<int,4> loda={1,2,3,4};
    vector<int> hell ={1,2,3};
    vector<int> something = printArray(hell);

    // cout<<newArray[2]<<endl;
}