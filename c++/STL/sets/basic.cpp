#include <iostream>
#include <set>
#include <vector>

int main(){
    // std::set<char> character={'A','B','C','A'};
    // std::vector<char> newCharArray;

    // for(auto i:character){
    //     std::cout<<i<<" ";
    //     newCharArray.push_back(i);
    // }
    // std::cout<<std::endl;

    std::set<int ,std::greater<int>> newSet;
    newSet.insert(11);
    newSet.insert(10);
    newSet.insert(9);
    std::set<int> normalSet(newSet.begin(),newSet.end());

    normalSet.erase(normalSet.find(11),normalSet.end());

    std::cout<<*(newSet.lower_bound(10));
    std::cout<<*(newSet.upper_bound(10));


    // newSet.erase(newSet.begin(),--newSet.end());

    for(auto i:newSet){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    for(auto i:normalSet){
        std::cout<<i<<" ";
    }


}