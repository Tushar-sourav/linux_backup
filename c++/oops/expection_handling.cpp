#include <iostream>

class Printer{
    std::string name;
    int page;

    public:
    Printer(std::string name,int page){
        this->name=name;
        this->page=page;
    }

    void print(std::string txt){
        int requiredPaper= txt.length()/10;

        if(page<requiredPaper)
           throw 101;


        std::cout<<txt<<std::endl;
        page-=requiredPaper;
    }
};

int main(){
    Printer p1 ("p1",5);

    try{
    p1.print("hi hello iam tushar sourav.iam a cse btech students");
    p1.print("hi hello iam tushar sourav.iam a cse btech students");
    p1.print("hi hello iam tushar sourav.iam a cse btech students");
    }
    catch(const char * exptxt){
        std::cout<<"exception :"<<exptxt<<std::endl;
    }
    catch(int expcode){
        std::cout<<"exception :"<<expcode<<std::endl;
    }
    catch(...){
        std::cout<<"exception happend"<<std::endl;
    }




}