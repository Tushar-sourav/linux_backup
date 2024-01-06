#include <iostream>
#include <string.h>

void reverseString(std::string& str,int s,int e){
    if(s>e){
        return;
    }
    std::swap(str[s],str[e]);
    s++;
    e--;
    reverseString(str,s,e);
}

int main(){
    std::string str="abcde";
    int s=0;
    int e=str.length()-1;
    reverseString(str,s,e);
    std::cout<<str<<std::endl;


}