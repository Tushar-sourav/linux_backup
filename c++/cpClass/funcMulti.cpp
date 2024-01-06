#include <stdio.h>
#include <stdarg.h>

int sum(int n,...){
    // va_list name
    // va_start(va_list name, n)
    // va_arg(name of va_list,type)  va_end(name of va_list)
    int sum=0;
    va_list la;
    va_start(la,n);
    for(int i=0;i<n;i++){
        sum+=va_arg(la,int);
    }
    
    va_end(la);
    

    return sum;
}

int main(){
    int res=sum(3,5,10,15);
    int res1=sum(2,5,10);
    printf("%d",res1);
}