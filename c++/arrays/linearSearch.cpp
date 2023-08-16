#include <iostream>
using namespace std;

bool found (int array[],int size,int key){
    for(int i=0;i<size;i++){
        if(array[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[100];
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout << "enter the key to be found"<<endl;
    int key;
    cin>>key;

    int keyFound=found(arr,size,key);
    if(keyFound==1){
        cout<<"key is present in array"<<endl;
    }
    else{
        cout<<"key is not present in array"<<endl;
    }


}