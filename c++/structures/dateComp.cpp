#include <iostream>
#include <vector>
#include <string>

typedef struct date{
    int day;
    int month;
    int year;
}date;

int main(){
    // date d1,d2;
    date arr[2];
    // bool flag=true;

    arr[0].day=2;
    arr[0].month=11;
    arr[0].year=2022;

    arr[1].day=21;
    arr[1].month=1;
    arr[1].year=2000;

    

    if(arr[0].day==arr[1].day){
        if(arr[0].month==arr[1].month){
            if(arr[0].year==arr[1].year){
                std::cout<<"dates are equal"<<std::endl;
            }else{
                std::cout<<"dates are not equal"<<std::endl;
            }
        }else{
            std::cout<<"dates are not equal"<<std::endl;
        }
    }else{
        std::cout<<"dates are not equal"<<std::endl;
    }      
        //    || dono same hai...
        //    ||
        //    ||
    //       \\//

    // if(arr[0].day!=arr[1].day) flag=false;
    // if(arr[0].month!=arr[1].month) flag=false;
    // if(arr[0].year!=arr[1].year) flag=false;

    if(flag==false) std::cout<<"dates are not equal"<<std::endl;
    else std::cout<<"dates are equal"<<std::endl;



}