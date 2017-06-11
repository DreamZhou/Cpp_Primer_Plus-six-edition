#include "stack.h"
#include <iostream>
Stack::Stack(int n)
{
    pitems = new Item[n];
    size = n;
    top = 0 ;
}

Stack::Stack(const Stack &st)
{


    size = st.size ;
    pitems = new Item[size];
    top = st.top;
    for (int i = 0; i < top; ++i){
        pitems[i] = st.pitems[i];
    }
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return (top == 0) ;
}

bool Stack::isfull() const
{
    return top == size ;
}

bool Stack::push(const Item &item)
{
    if (top == size){
        std::cout << "Stack already full.";
        return false;
    }
    top++;
    pitems[top] = item;
    return true;
}

bool Stack::pop(Item &item)
{
    if (top == 0){
        std::cout << "Stack already empty.";
        return false;
    }
    item = pitems[top] ;
    --top ;
    return true;
}

Stack &Stack::operator=(const Stack &st)
{
    if (this == &st)
        return *this;
    delete [] pitems;
    size = st.size;
    pitems = new Item[size];
    top = st.top;
    return *this ;
}

std::ostream & operator<<(std::ostream &os, Stack &st)
{
    os << "top: " << st.top << "  size: " << st.size << std::endl;
    for ( int i = 0 ; i < st.top ;++i){
        os << st.pitems[i] << "  ";
    }
    return os;
}
