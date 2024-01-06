#include <iostream>
#include <math.h>

// 3 employ given hai or ek customer hai 
// sab ki coordinates de rakhe hai.
// compare karke nikalna hai kon sa employee sabse pass padega.


typedef struct cordinates{
    int x_cord;
    int y_cord;
}cord;

typedef struct employ{
    int empid;
    cord em;
}emp;

typedef struct customer{
    int custid;
    cord cus;
}cust;


int dist(int x1,int x2,int y1,int y2){
    int a=(x1-x2);
    int b=(y1-y2);
    int c=pow(a,2)+pow(b,2);
    // std::cout<<c<<std::endl;
    int ans= sqrt(c);
    return ans;
}

int main(){
    emp e1,e2,e3;
    e1.empid=1;
    e1.em.x_cord=12;
    e1.em.y_cord=10;

    e2.empid=2;
    e2.em.x_cord=2;
    e2.em.y_cord=10;

    e3.empid=3;
    e3.em.x_cord=21;
    e3.em.y_cord=10;

    cust c1;
    c1.custid=22;
    c1.cus.x_cord=10;
    c1.cus.y_cord=15;

    int d1=dist(e1.em.x_cord,c1.cus.x_cord,e1.em.y_cord,c1.cus.y_cord);
    int d2=dist(e2.em.x_cord,c1.cus.x_cord,e2.em.y_cord,c1.cus.y_cord);
    int d3=dist(e3.em.x_cord,c1.cus.x_cord,e3.em.y_cord,c1.cus.y_cord);

    if(d1>=d2 && d1>=d3){
        std::cout<<"employ1 with id "<< e1.empid<<" will receive the order"<<d1<<std::endl;
    }
    else if(d2>=d1 &&d2>=d3){
        std::cout<<"employ2 with id "<< e2.empid<<" will receive the order"<<d2<<std::endl;
        
    }
    else{
        std::cout<<"employ3 with id "<< e3.empid<<" will receive the order"<<d3<<std::endl;
        
    }


}
