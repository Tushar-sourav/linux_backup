#include <iostream>
#include <string.h>

// flatu cahrcter hatao.
bool isValid(char c){
    if((c>='a' && c<='z') ||(c>='A' && c<='Z') || (c>='0' && c<='9')){
        return 1;
    }
    return 0;
}

char toLower(char c){
    char ch;
    if((c>='a' && c<='z')|| (c>='0' && c<='9')){
        ch=c;
    }
    else{
        ch=c-'A'+'a';
    }
    return ch;
}



void isPalindrome(std::string str){
    std::string temp;
    bool flag=true;
    int size1=str.length();
    char a;


    for(int i=0;i<size1;i++){
        if(isValid(str[i])){
            a=tolower(str[i]);
            temp.push_back(a);
        }

        // std::cout<<temp[i]<<" ";
    }
    std::cout<<std::endl;
    
    int size2=temp.length();
    int s=0,e=size2-1;
    // std::cout<<size2<<std::endl;






    // check palindrome.
    while(s<=e){
        if(temp[s]!=temp[e]){
            flag=false;
            break;
        }
        s++;
        e--;
    }

    if(flag==true){
        std::cout<<"palindreome"<<std::endl;
    }
    else{
        std::cout<<"not palindrome"<<std::endl;
    }
}


int main(){
    std::string n="0hel*leH0@";
    isPalindrome(n);

}