#include <iostream>
#include <queue>
using namespace std;

// void addtask(queue<string> myroutine,string task){
//     myroutine.push(task);
// }

void printRoutine(queue<string> str){
    while(!str.empty()){
        cout<<str.front()<<endl;
        str.pop();
    }
    cout<<endl;
}

int main(){
    queue<string> myroutine;

    for(int i=0;i<5;i++){
        string temp;
        getline(cin,temp);
        myroutine.push(temp);
    }

    printRoutine(myroutine);
}