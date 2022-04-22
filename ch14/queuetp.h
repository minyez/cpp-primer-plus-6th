#pragma once

template <typename T>
class QueueTp
{
    private:
        struct Node { T item; struct Node *next; };
        Node * front;
        Node * end;
        int nnodes;
    public:
        QueueTp() { front = end = nullptr; nnodes = 0; }
        ~QueueTp();
        int queuecount() const { return nnodes; }
        bool isempty() { return nnodes == 0; }
        bool enqueue(const T &);
        bool dequeue(T &);
};

template <typename T>
QueueTp<T>::~QueueTp()
{
    Node * tmp;
    while(front!=nullptr)
    {
        tmp = front;
        front = tmp->next;
        delete tmp;
    }
}

template <typename T>
bool QueueTp<T>::enqueue(const T &item)
{
    Node * add = new Node;
    add->item = item;
    add->next = nullptr;
    if(front == nullptr)
        front = add;
    else
        end->next = add;
    // set the new node as the end;
    end = add;
    nnodes++;
    return true;
}


template <typename T>
bool QueueTp<T>::dequeue(T &item)
{
    if(isempty()) return false;
    item = front->item;
    front = front->next;
    if(front==nullptr)
        end = nullptr;
    nnodes--;
    return true;
}
