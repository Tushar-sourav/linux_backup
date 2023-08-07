#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void frequency(int arr[],int size){
    int freq[100]={0};
    // max element in array.
    int ma=0;
    for(int i=0;i<size;i++){
        ma=max(ma,arr[i]);
    }


    for(int i=0;i<=ma;i++){
        int k=arr[i];
        freq[k]+=1;
    }

    // printArray(freq,ma);
// printin.
    // for(int i=0;i<=ma;i++){
    //     cout<<i<<"--->"<<freq[i]<<endl;
    // }

    for(int i=1;i<=ma;i++){
        if(freq[i]>0){
            cout<<i<<" ";
        }
    }
    cout<<endl;

}



int main(){
    int arr[100]={1,2,3,4,66,5,2,4,5,11,13};
    frequency(arr,11);
}
