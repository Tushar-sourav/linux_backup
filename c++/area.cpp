#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.145;
#define square(r)(r*r);

// int main(){
    // float r;
    // cin>>r;

    // float ans= PI*square(r);
    // cout<<ans<<endl;


    int main(){
        int n;
        cin>>n;
        int fact=1;

        for(int i=1;i<=n;i++){
            fact=fact*i;
        }

        cout<<fact<<endl;
    }
