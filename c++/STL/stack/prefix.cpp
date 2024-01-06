#include <iostream>
#include <math.h>
#include <string.h>
#include <stack>
using namespace std;

stack<int> st;

int prefix(string str){
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]>='0' && str[i]<='9'){
            st.push(str[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch(str[i]){
                case '+':
                        st.push(op1+op2);
                        break;
                case '-':
                        st.push(op1-op2);
                        break;
                case '*':
                        st.push(op1*op2);
                        break;
                case '/':
                        st.push(op1/op2);
                        break;
                case '^':
                        st.push(pow(op1,op2));
                        break;
            }
        }
    }

    return st.top();
}


int main(){
    string str="-+7*45+20";
    cout<<prefix(str)<<endl;

}