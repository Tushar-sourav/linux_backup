#include <iostream>
#include <string.h>


bool isPalindrome(std::string arr,int s,int e){
    if(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        else{
            return isPalindrome(arr,s+1,e-1);
        }
    }
    return 1;
}

int main(){
    std::string name="abca";
    int s=0;
    int e=name.size()-1;
    std::cout<<isPalindrome(name,s,e)<<std::endl;

}