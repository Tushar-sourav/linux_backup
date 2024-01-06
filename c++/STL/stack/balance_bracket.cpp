#include <iostream>
#include <stack>
using namespace std;

bool isValid(string bracket){
    stack<char> st;
    for(int i=0;i<bracket.size();i++){
        if(bracket[i]=='[' || bracket[i]=='(' || bracket[i]=='{'){
            st.push(bracket[i]);
        }
        else if(bracket[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
            else{
                return false;
            }
        }

        else if(bracket[i]==')'){
            if(st.top()=='('){
                st.pop();
            }
            else{
                return false;
            }
        }

        else if(bracket[i]=='}'){
            if(st.top()=='{'){
                st.pop();
            }
            else{
                return false;
            }
        }

    }

    return true;
}

int main(){
    string bracket="{([]})";
    cout<<isValid(bracket)<<endl;

}