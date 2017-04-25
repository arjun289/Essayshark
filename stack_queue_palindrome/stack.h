#ifndef STACK_H
#define STACK_H
#include <iostream>

class Stack
{
int top;
int size;
int* stackarr;
public:
    Stack(int);
    void push(int);   // function to push data into stack
    int pop();        // function to pop data from stack
    void printStack();// function to print the stack
    void peek();      // function to print see the value top is pointing at
};

#endif // STACK_H
