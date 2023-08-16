#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    char ope;
    cin>>ope;

    switch(ope){
        case '+':cout<<a+b<<endl;
        break;
        case '*':cout<<a*b<<endl;
        break;
        case '-':cout<<a-b<<endl;
        break;
        case '/':cout<<a/b<<endl;
        break;
        default:cout<<"enter valid operator"<<endl;
    }
}