#include <iostream>
using namespace std;

int sumArr(int array[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    return sum;
}

int main(){
    int arr[100];
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int ans= sumArr(arr,size);
    cout<<ans<<endl;
}