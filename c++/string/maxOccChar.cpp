#include <iostream>
#include <string>
#include <algorithm>


// void freq(std::string str){
//     int size=str.length();
//     int arr[size]={0};
//     for(int i=0;i<size;i++){
//         int count=0;
//         if(arr[i]!=1){
//             for(int j=0;j<size;j++){
//                 if(str[i]==str[j]){
//                     count++;
//                     arr[j]=1;
//                 }
//             }
//         }

//         if(count>0){
//         std::cout<<"freq of"<<str[i]<<"-->"<<count<<std::endl;
//         }

//     }

   
// }


char maxOcc(std::string str){
    int size=str.length();
    int arr[26]={0};
    int n;
    for(int i=0;i<size;i++){
        if(str[i]>='a' && str[i]<='z'){
            n=str[i]-'a';
        }
        else{
            n=str[i]-'A';
        }
        arr[n]+=1;
    }
    
    int maxi=0;
    for(int i=1;i<26;i++){
        if(arr[i]>arr[maxi]){
            maxi=i;
        }
    }

    return maxi+'a';
} 

int main(){
    std::string n="testsample";
    char ans=maxOcc(n);
    std::cout<<ans<<std::endl;
}