/*
 * Date  : 2022-03-21 16:36:08
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstdlib>
#include "queue.h"
using std::cout;
using std::endl;

void Customer::set(long when)
{
    arrive = when;
    processtime = std::rand() % MAXPROCT + 1;
}

Queue::Queue(int qs) : qsize(qs > 0? qs : Q_SIZE)
{
    if(!(qs>0)) cout << "Parsed non-positve qsize, reset to default size" << endl;
    front = nullptr;
    rear = nullptr;
    items = 0;
}

Queue::~Queue()
{
    Node * tmp;
    while(front!=nullptr)
    {
        tmp = front;
        front = tmp->next;
        delete tmp;
    }

}

bool Queue::isfull() const
{
    return items == qsize;
}

bool Queue::isempty() const
{
    return items == 0;
}

int Queue::queuecount() const
{
    return items;
}

bool Queue::enqueue(const Item &item)
{
    if(isfull()) return false;
    Node * add = new Node;
    add->item = item;
    add->next = nullptr;
    if(front == nullptr)
        front = add;
    else
        rear->next = add;
    // set the new node as the end;
    rear = add;
    items++;
    return true;
}

bool Queue::dequeue(Item &item)
{
    if(isempty()) return false;
    item = front->item;
    Node * tmp = front;
    front = tmp->next;
    if(front == nullptr) rear = nullptr;
    items--;
    return true;
}
