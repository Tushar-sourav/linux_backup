#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int q=n;
    int ans=0;
    int i=0;
    int s=0;
    int j=0;

//looping till the number is 0.
    while(n!=0){
        int bit=(n&1); // finding the last bit.
        ans=bit*pow(10,i)+ans;  //printing in reverse order.
        n=n>>1; //removing the last bit.
        i++; // increasing the value of i.
    }

    cout <<"binary of " << q << " is\t"<<ans<<endl;

    while(ans!=0){
        int lbit=ans%10;
        if(lbit==1){
            lbit=0;
        }
        else{
            lbit=1;
        }
        s=lbit*pow(10,j)+s;
        ans=ans/10;
        j++;
    }
    cout<<s<<endl;

    int x=(s^1);
    cout<<x<<endl;




}