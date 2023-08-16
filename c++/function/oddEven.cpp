#include <iostream>
using namespace std;

void isOdd(int a){
    if(a%2==0){
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    isOdd(n);
}