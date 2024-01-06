#include <iostream>
#include <deque>

void showQue(std::deque<int> gque){
    std::deque<int>::iterator it;
    for(it=gque.begin();it<gque.end();it++){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    std::deque<int> ran_que;
    ran_que.push_back(10);
    ran_que.push_front(11);

    showQue(ran_que);

    // for(auto i:ran_que){
    //     std::cout<<i<<" ";
    // }

    std::cout<<ran_que.size()<<std::endl;
    // std::cout<<ran_que.max_size()<<std::endl;
    std::cout<<ran_que.front()<<std::endl;
    std::cout<<ran_que.back()<<std::endl;
    std::cout<<ran_que.empty()<<std::endl;
    


}