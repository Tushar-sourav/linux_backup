#include <iostream>

// namespace s1{
//     int a=10;
// }

int main(){
    // int a=20;
    // std::cout<<a<<std::endl;
    // std::cout<<s1::a<<std::endl;
    std::string ch;
    std::string n;

    std::cout<<"write char"<<std::endl;
    std::cin>>ch;

    int size=ch.size();
    for(int i=0;i<size;i++){
    char b;
       if(ch[i]=='z'){
        b='a';
       
       }
       else{
         b=ch[i]+1;
       }
        n.push_back(b);
    }

   
   std::cout<<n<<std::endl;

    
}