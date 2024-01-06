#include <iostream>
#include <string>

typedef struct stack{
    int size;
    int top;
    char *arr;
}stack;

bool isFull(stack *s){
    if(s->top == s->size-1){
        return 1;
    }
    return 0;
}

bool isEmpty(stack *s){
    if(s->top == -1){
        return 1;
    }
    return 0;
}

void push(stack *s,char ch){
    if(isFull(s)==0){
        s->top++;
        s->arr[s->top]=ch;
    }
    else{
        std::cout<<"stack full"<<std::endl;
    }
}

int pop(stack *s){
    char var;
    if(isEmpty==0){
        var=s->arr[s->top];
        s->top--;
    }
    else{
        std::cout<<"stack already empty"<<std::endl;
    }
    return var;
}

char* rev(std::string *arr){
    std::
    int len=arr->length();
    for(int i=0;i<len;i++){     
        push(arr,i);
    }
}



int main(){
    stack *s=(stack*)malloc(sizeof(stack));

    std::string name="hello";
    int s=name.length();
    s->size=s;
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(arr));


}