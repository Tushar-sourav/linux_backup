#include <iostream>
#include <string>

class YoutubeChannel{
    private:
    std::string name;
    int subscriberCount;

    public:

    YoutubeChannel(std::string name,int num){
        this->name=name;
        this->subscriberCount=num;
    }

    friend std::ostream & operator << (std::ostream &COUT, YoutubeChannel &y1);

   

};

std::ostream & operator << (std::ostream &COUT, YoutubeChannel &y1){
    COUT <<y1.name<<std::endl;
    COUT <<y1.subscriberCount<<std::endl;
    return COUT;
}

int main(){
    YoutubeChannel y1("code beauty",50);

    std::cout<<y1;

}