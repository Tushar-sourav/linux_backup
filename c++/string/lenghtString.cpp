#include <iostream>

int getlen(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    std::cout<<"enter the name"<<std::endl;
    std::cin>>name;

    int ans=getlen(name);
    std::cout<<ans<<std::endl;
}