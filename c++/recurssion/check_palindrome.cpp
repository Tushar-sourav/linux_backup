#include <iostream>
#include <string.h>

bool isPalindrome(std::string str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    s++;
    e--;

    return isPalindrome(str,s,e);
}

int main(){
    std::string str="abcwba";
    int s=0;
    int e=str.length()-1;
    std::cout<<isPalindrome(str,s,e);

}