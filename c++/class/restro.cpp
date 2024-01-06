#include <iostream>
#include <vector>


int main(){
    std::string isorder;
    std::vector<int>price={100,200,300,100,200,300};
    std::vector<int>cost;
    int order;
    std::cout<<"do you want to give order"<<std::endl;
    // while(order!="done"){
        std::cout<<"MENU"<<std::endl;
        std::cout<<"dish"<<"    "<<"price"<<std::endl;
        std::cout<<"1"<<"MOMOS"<<"    "<<"100"<<std::endl;
        std::cout<<"2"<<"CURY"<<"    "<<"200"<<std::endl;
        std::cout<<"3"<<"RICE"<<"    "<<"300"<<std::endl;
        std::cout<<"4"<<"ROTI"<<"    "<<"100"<<std::endl;
        std::cout<<"5"<<"BIRIYANI"<<"    "<<"200"<<std::endl;
        std::cout<<"6"<<"CHICKHEN CURRY"<<"    "<<"300"<<std::endl;
    // }
    // while(isorder!="no"){
        std::cout<<"enter your order"<<"---->";
        std::cin>>order;
        switch(order){
            case 1:std::cout<<"you ordered MOMOS"<<std::endl;
            int a=price[0];
            cost.push_back(a);
            break;
            case 2:std::cout<<"you ordered CURY"<<std::endl;
            int b=price[1];
            cost.push_back(b);
            break;
            case 3:std::cout<<"you ordered RICE"<<std::endl;
            int c=price[2];
            cost.push_back(c);
            break;
            case 4:std::cout<<"you ordered ROTI"<<std::endl;
            int d=price[3];
            cost.push_back(d);
            break;
            case 5:std::cout<<"you ordered BIRIYANI"<<std::endl;
            int e=price[4];
            cost.push_back(e);
            break;
            case 6:std::cout<<"you orderedCHIKCHEN CURRY"<<std::endl;
            int f=price[5];
            cost.push_back(f);
            break;
        }

        for(int i:cost){
            std::cout<<i<<" ";
            std::cout<<std::endl;
        }


    // }
}