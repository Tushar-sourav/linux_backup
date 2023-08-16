#include <iostream>
using namespace std;

void isPrime(int n){
    int div=2;
    bool flag=false;

    while(div<n){
        if(n%div==0){
            flag=true;
            break;
        }
        div++;
    }

    if(flag==true){
        cout<<"number is not prime"<<endl;
    }
    else{
        cout<<"number is prime"<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    isPrime(n);
    
}