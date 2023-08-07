#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int div=2;
    bool flag=false;
    while(div<n){
        if(n%div==0){
            cout<<"not prime"<<endl;
            flag=true;
            break;
        }
        else{
            div+=1;
            flag=false;
        }
    }
    if(flag==false){
        cout << "prime no" << endl;
    }
}