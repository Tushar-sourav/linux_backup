#include <iostream>
using namespace std;

int main(){
    // int i;
    // int n;
    // cin>>n;
    // for(i;i<=n;i++){
    //     cout<<i<<endl;

    // }


    // int n;
    // cin>>n;
    // int i,j,k;
    // for(i=1,j=5;i<=5,j>=1;i++,j--){
    //     cout<<i<<" "<<j<<endl;
    // }

    //fibonacci series
    // int a=0;
    // int b=1;
    // int n;
    // cin>>n;
    // int i;
    // cout<<a<<" "<<b<<" ";
    // for(i;i<=n;i++){
    //     int c=a+b;
    //     cout<<c<<" ";
    //     a=b;
    //     b=c;
    // }

    //isPrime
    int n;
    cin>>n;
    int i;
    bool flag=false;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=true;
            break;
        }
        i++;
    }

    if(flag==false){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }

}
