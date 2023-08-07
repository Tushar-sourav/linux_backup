#include <iostream>
using namespace std;

void printArray(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int softy[15];
    cout << softy[3]<<endl;

    int n[3]={1,2,3};
    cout << n[2]<<endl;

    int first[8]={0};

    for (int i=0;i<8;i++){
        first[i]=1;
    }
    
    for(int i=0;i<8;i++){
        cout<<first[i]<<" ";
    }
    cout <<endl;

    printArray(first,8);
}