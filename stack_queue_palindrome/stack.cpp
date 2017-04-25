#include "stack.h"

Stack::Stack(int n)
{
    top = -1;
    size = n;
    stackarr = new int[size];
}

void Stack::push(int data){
    if(top >= size ){
        std::cout<<"stack full";
        return;
    }
    stackarr[++top] = data;
}

int Stack::pop(){
    if(top < 0){
        std::cout<<"stack empty"<<std::endl;
        return 0;
    }

    return stackarr[top--];
}

void Stack::peek(){
    std::cout<<"top element: "<<stackarr[top]<<std::endl;
}

void Stack::printStack(){
    if(top < 0){
        std::cout<< "stack empty"<<std::endl;
        return;
    }
    int i = top;

    while(i >= 0){
        std::cout<<stackarr[i]<< " ";
        i--;
    }
    std::cout<<std::endl;
    return;
}
