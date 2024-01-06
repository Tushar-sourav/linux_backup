#include <iostream>

 struct dim{
    int l;
    int b;
}a1={10,10},a2;

struct addres{
    int areal;
    int area2;
};

struct addres calarea(struct dim a1,struct dim a2){


    struct addres ta;
    ta.areal=a1.l*a1.b;
    ta.area2=a2.l*a2.b;

    // int totalarea1=a1.l*a1.b;
    // int totalarea2=a2.l*a2.b;
    return ta;
}


int main(){
    a2.l=20;
    a2.b=30;

    struct addres ans=calarea(a1,a2);
   std::cout<<ans.area2<<" "<<ans.areal<<std::endl;

}