/*
 * Date  : 2022-03-21 14:50:18
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include "stack.h"
using std::cout;
using std::ostream;
using std::endl;

Stack::Stack(int n)
{
    if(n > MAX)
    {
        cout << "Request stack over maximal size, reset to MAX = " << MAX << endl;
        n = MAX;
    }
    pitems = new Item [n];
    size = n;
    top = 0;
}

Stack::Stack(const Stack &st)
{
    delete [] pitems;
    size = st.size;
    pitems = new Item [size];
    top = st.top;
    for (int i = 0; i < top; i++)
        pitems[i] = st.pitems[i];
}

Stack & Stack::operator=(const Stack &st)
{
    if(this == &st) return *this;
    delete [] pitems;
    size = st.size;
    pitems = new Item[size];
    top = st.top;
    for (int i = 0; i < top; i++)
        pitems[i] = st.pitems[i];
    return *this;
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == size;
}

bool Stack::push(const Item & item)
{
    if(isfull()) return false;
    pitems[top++] = item;
    return true;
}

bool Stack::pop(Item & item)
{
    if(isempty()) return false;
    item = pitems[--top];
    return true;
}

ostream & operator<<(ostream &os, const Stack &st)
{
    os << "(";
    for (int i = 0; i < st.top-1; i++)
    {
        os << st.pitems[i] << " ";
    } /* end for (int i = 0; i < st.top; i++) */
    if(st.top>0) os << st.pitems[st.top-1];
    os << ")";
    return os;
}
