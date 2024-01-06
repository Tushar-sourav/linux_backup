#include <iostream>
#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int size;
    int top;
    int *arr;
}stack;

bool isEmpty(stack *s){
    if(s->top == -1){
        return 1;
    }
    return 0;
}

bool isFull(stack *s){
    if(s->top == s->size-1){
        return 1;
    }
    return 0;
}

void putVal(stack *s,int a){
    if(isFull(s)==1){
        std::cout<<"stack overflow"<<std::endl;
    }
    else{
        s->top++;
        s->arr[s->top]=a;
    }
}

int popVal(stack *s){
    int val;
    if(isEmpty(s)==1){
        std::cout<<"stack underflow"<<std::endl;
        return -1;
    }
    else{
        val=s->arr[s->top];
        s->top--;
    }
    return val;
}


int main(){
    // stack s;
    // s.size=6;
    // s.top=-1;
    // s.arr=(int*) malloc(s.size*sizeof(int));

    // s.arr[0]=1;
    // s.top=0;
    // putVal(s,5);
    // s.top++;
    // putVal(s,3);
    // s.top++;
    // putVal(s,2);
    // s.top++;
    // putVal(s,1);
    // s.top++;
    // putVal(s,1);
    // s.top++;
    // putVal(s,1);
    // s.top++;


    // for(int i=0;i<s.size;i++){
    //     std::cout<<s.arr[i]<<" ";
    // }
    // std::cout<<std::endl;

    // // int a=isEmpty(s);
    // // std::cout<<a<<std::endl;
    // int b=isFull(s);
    // std::cout<<b<<std::endl;

    stack *sp=(stack*)malloc(sizeof(stack));
    sp->size=4;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));

    int a=isEmpty(sp);
    std::cout<<a<<std::endl;
    int d=isFull(sp);
    std::cout<<d<<std::endl;

    putVal(sp,33);
    putVal(sp,33);
    putVal(sp,33);
    putVal(sp,39);
    int v=popVal(sp);
    std::cout<<v<<std::endl;

    int a1=isEmpty(sp);
    std::cout<<a1<<std::endl;
    int d1=isFull(sp);
    std::cout<<d1<<std::endl;





}

