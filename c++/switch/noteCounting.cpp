#include <iostream>
using namespace std;

int main(){
    int am=1300;
    int n500,n200,n100,n50,n20,n10;

        if(am>500){
            n500=am/500;
            am=am%500;
        }
        // cout<<am<<endl;

        if(am>200){
            n200=am/200;
            am=am%200;
        }
        if(am>100){
            n100=am/100;
            am=am%100;
        }
        if(am>50){
            n50=am/50;
            am=am%50;
        }
        if(am>20){
            n20=am/20;
            am=am%20;
        }
        if(am>10){
            n10=am/10;
            am=am%10;
        }
    cout<<"no of 500 notes:"<<n500<<endl;
    cout<<"no of 200 notes:"<<n200<<endl;
    cout<<"no of 100 notes:"<<n100<<endl;
    cout<<"no of 50 notes:"<<n50<<endl;
    cout<<"no of 20 notes:"<<n20<<endl;
    cout<<"no of 10 notes:"<<n10<<endl;
}