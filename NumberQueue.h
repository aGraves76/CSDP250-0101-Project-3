// This is NumberQueue.h
// Amanda Graves
// CSDP 250-0101 Project 3
//

#ifndef NUMBERQUEUE_H
#define NUMBERQUEUE_H
#include "Node.h"

class NumberQueue
{
    public:
        // constructor
        NumberQueue()
        {
            front = nullptr;
            back = nullptr;
        }
   
        // destructor
        ~NumberQueue()
        {
            while (!isEmpty())
                dequeue();
        }
   
        void enqueue(int binary);
        int dequeue();
        bool isEmpty();
   
    private:
        Node* front;
        Node* back;
};

#endif