#include <iostream>
using namespace std;

void sign(int num){
    int n=2;
    if((n^num)<0){
        cout<<"negative number"<<endl;
    }else{
        cout<<"positive number "<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    sign(n);
}