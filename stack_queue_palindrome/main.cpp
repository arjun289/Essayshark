//#include <iostream>
#include <stack.h>

using namespace std;

int main()
{

    Stack* st = new Stack(4);
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    st->printStack();
    st->pop();
    st->printStack();
    st->peek();
    return 0;
}

