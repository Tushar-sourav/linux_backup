#include<iostream>
#include<set>
#include<vector>

using namespace std;
int main(){

    vector<int> my_array;
    int base_number; printf("Enter number of elements: "); cin>>base_number;
    for(int i = 1; i<=base_number; i++){
        int temp; printf("Enter numher: "); cin>>temp;
        my_array.push_back(temp);
    } 

    set<int> my_set;
    for(int i:my_array){
        my_set.insert(i);
    }

    for(int i: my_set){
        int count = 0;
        for(int j: my_array){
            if(i == j) count++;
        }
        printf("%d : %d\n", i, count);
    }
}