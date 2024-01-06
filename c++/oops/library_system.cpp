#include <iostream>

class Book{
    std::string title;
    std::string author;
    int publicationYear;

    public:

    Book(std::string title,std::string author,int publicationYear){
        this->title=title;
        this->author=author;
        this->publicationYear=publicationYear;

    }

    ~Book(){
        std::cout<<"Destruction of the Book: "<<this->title;
    }

    void print(){
        std::cout<<"Book created:"<<this->title<<"author "<<this->author<<" ";
    }
};


int main(){
    Book B1("Harry Potter","Jk Rowling",1998);
    B1.print();
}