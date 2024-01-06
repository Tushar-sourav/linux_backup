#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int getlen(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

// void reverseS(char arr[]){
//     int len=getlen(arr);
//     int s=0,e=len-1;
//     while(s<=e){
//         std::swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }

//     // std::cout<<arr<<std::endl;
// }

// void ispalindrome(char a[]){
//     bool flag=true;
//     int n=getlen(a);
//     char b[n];
//     for(int i=0;i<n;i++){
//         b[i]=a[i];
//     }
//     reverseS(a);
//     // std::cout<<a<<std::endl;

//     for(int i=0;i<n;i++){
//         if(a[i]!=b[i]){
//             flag=false;
//         }
//     }
//     if(flag==true){
//         std::cout<<"yes"<<std::endl;
//     }else{
//         std::cout<<"no"<<std::endl;
//     }
    
// }

void ispalindrome(char arr[]){
    bool flag=true;
    int n=getlen(arr);
    int s=0,e=n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            flag=false;
            break;
        }
        s++;
        e--;
    }

    if(flag==false){
        std::cout<<"no"<<std::endl;
    }else{
        std::cout<<"yes"<<std::endl;
    }
}



int main(){
    char name[]="hhlhhs";
    ispalindrome(name);
    // int a=('h'^'h');
    // std::cout<<a<<std::endl;
}