#include <iostream>
#include <climits>
using namespace std;

int getMax(int array[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        //using predefined functions.
        maxi=max(array[i],maxi);
    //     if(array[i]>max){
    //         max=array[i];
    //     }
     }
    return maxi;
}

int getMin(int array[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        //using predefined function.
        mini=min(array[i],mini);
        // if(array[i]<min){
        //     min=array[i];
        // }
    }
    return mini;
}

int main(){
    int size;
    cin>>size;

    int num[100];
//taking input.
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    int ans1=getMax(num,size);
    int ans2=getMin(num,size);
    cout<<ans1<<endl;
    cout<<ans2<<endl;

    return 0;
}