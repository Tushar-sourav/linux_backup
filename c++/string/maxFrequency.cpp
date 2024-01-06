#include <iostream>
#include <string.h>

void maxFreq(std::string n){
    int size=n.size();
    int arr[25]={0};

    for(int i=0;i<size;i++){
        char ch=n[i];
        int num=ch-'a';
        arr[num]+=1;
    }

    // cal max
    int maxi=0;
    for(int i=1;i<25;i++){
        if(arr[maxi]<arr[i]){
            maxi=i;
        }
    }

    std::cout<<"max occ char--->"<<char('a'+maxi)<<std::endl;
}

int main(){
    std::string n="hello hi";
    maxFreq(n);
    // std::cout<<char('a'+1)<<std::endl;
}