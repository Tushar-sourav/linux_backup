#include <iostream>
#include <list>
#include <algorithm>


int main(){
    std::list <int> mylist={1,4,22,7};
    // for(auto i:mylist){
    //     std::cout<<i<<" ";
    // }

    // std::cout<<mylist.front();
    // std::cout<<mylist.back();

    // mylist.push_back(99);
    // mylist.push_front(11);
    // mylist.pop_back();
    // mylist.pop_front();

//    mylist.insert(mylist.begin(),2,7);

//    std::cout<<mylist.size();



    // std::sort(mylist.begin(),mylist.end());

    // std::list<int>::iterator it;

    // for(it=mylist.begin();it!=mylist.end();it++){
    //     std::cout<<*it<<" ";
    // }

    // std::cout<<*(mylist.begin())<<std::endl;

    // mylist.reverse();
    mylist.sort();


    for(auto i: mylist){
        std::cout<<i<<" ";
    }

}