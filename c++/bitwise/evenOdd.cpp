#include <iostream>
using namespace std;

void isEven(int n){
    if(n&1){
        cout<<"number is odd"<<endl;
    }
    else{
        cout<<"number is even"<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    isEven(n);
}