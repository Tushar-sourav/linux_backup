#include <iostream>
using namespace std;

void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<a<<" "<<b<<endl;
}

int main(){
    int a=2;
    int b=3;
    swap(a,b);
}