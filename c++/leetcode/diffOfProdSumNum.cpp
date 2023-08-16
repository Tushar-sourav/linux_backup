#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans;
    int sum=0;
    int prod=1;


    //sum of number 
    //prod of number

    while(n>0){
        int digit=n%10;
        
        sum+=digit;

        prod=prod*digit;

        n=n/10;
    }

    
    //answer
    ans=prod-sum;
    cout<<prod<<endl;
    cout<<sum<<endl;
    cout<<ans<<endl;
}