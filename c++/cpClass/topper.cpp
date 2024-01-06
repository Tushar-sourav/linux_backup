#include <iostream>
#include <string.h>
#include <vector>

typedef struct marks{
    int hindi;
    int eng;
    int oops;
    int cn;
}marks;

typedef struct students{
    int rollno;
    std::string name;
    marks m;
}studnets;

int maxi(int arr[],int n){
    int m=0;
    int i=0;
    for(;i<n;i++){
        if(arr[i]>arr[m]){
            m=i;
        }
    }
    return m;
}

int main(){
    students st[20];
    // std::vector<int>count={0,0};
    int count[20]={0};
    char n;

    for(int i=0;i<2;i++){
        std::cout<<"enter name-->";
        std::cin>>st[i].name;
        std::cout<<"enter roll no--->";
        std::cin>>st[i].rollno;
        std::cout<<"enter marks in eng>";
        std::cin>>st[i].m.eng;
        count[i]+=st[i].m.eng;
        std::cout<<"enter marks in cn>";
        std::cin>>st[i].m.cn;
        count[i]+=st[i].m.cn;
        std::cout<<"enter marks in oops>";
        std::cin>>st[i].m.oops;
        count[i]+=st[i].m.oops;
        std::cout<<"enter marks in hindi>";
        std::cin>>st[i].m.hindi;
        count[i]+=st[i].m.hindi;
    }

    // for(int i:count){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<std::endl;

    int ans=maxi(count,20);
    std::cout<<"topper is roll no--->"<<ans+1<<" "<<st[ans].name<<std::endl;

}

