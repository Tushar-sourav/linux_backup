#include <iostream>
#include <vector>

int main(){
    std::vector<int> arr={1,2,3,4,5};
    int size=arr.size();
    std::vector<int> *ptr=&arr; 
    int s=0;
    int e=size-1;

   while(s<=e){
    int temp=*(ptr+s);
    *(ptr+s)=*(ptr+s);
    *(ptr+e)=temp;
    s++;
    e--;
   }
}