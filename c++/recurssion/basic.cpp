#include <iostream>


void reachDest(int src,int dest){
    if(src==dest){
        std::cout<<"pahuch gae"<<std::endl;
        return;
    }
    std::cout<<src<<" "<<dest<<std::endl;
    reachDest(src+1,dest);

}

int main(){
    int dest=10;
    int src=1;
    
    reachDest(src,dest);
}