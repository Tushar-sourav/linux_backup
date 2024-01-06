#include <iostream>
#include <string>
#include <string.h>

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
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }

//     std::cout<<arr<<std::endl;
// }

char tolower(char a){
    char c;
    if(a>='a' && a<='z'){
        c= a;
    }else if (a>='A' && a<='Z'){
        c=a-'A'+'a';
    }
    return c;

}

void ispalindrome(char arr[]){
    bool flag=true;
    int n=getlen(arr);
    int s=0,e=n-1;
    while(s<=e){
        if(tolower(arr[s])!=tolower(arr[e])){
            flag=false;
        }
        s++;
        e--;
    }
    if(flag==true){
        std::cout<<"yes"<<std::endl;
    }else{
        std::cout<<"no"<<std::endl;
    }
}

int main(){
    char name[]="applehhhh";
    // reverseS(name);
    // char n=tolower('g');
    // char h =tolower('G');
    // std::cout<<n<<std::endl;
    // std::cout<<h<<std::endl;

    ispalindrome(name);
}