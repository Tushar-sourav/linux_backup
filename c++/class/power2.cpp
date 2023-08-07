#include <iostream>
#include <math.h>
using namespace std;

// int power(int num){
//     return 
// }

int main(){
    int n;
    std::cin>>n;
    int count=0;

#if 0
    for(int i=0;i<=n;i++){
        if(pow(2,i)==n){
        while(n>1){
        n=n/2;
        count+=1;
    }
        }
    
    }
    if(count==0){
        cout<<"not power of 2"<<endl;
    }
    else{
        cout<<count<<endl;
    }
#endif

        if((n&(n-1))==0){
            while(n>1){
                n=n/2;
                count+=1;
            }
        }
        
        if(count==0){
            std::cout<<"not power of 2"<<std::endl;
        }
        else{
            std::cout<<count<<std::endl;
        }



}