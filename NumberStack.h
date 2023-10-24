// This is NumberStack.h
// Amanda Graves
// CSDP 250-0101 Project 3
//

#ifndef NUMBERSTACK_H
#define NUMBERSTACK_H
#include "Node.h"

class NumberStack
{    
    public:
        // constructor
        NumberStack()
          head = nullptr;
           
        // destructor
        ~NumberStack()
        {
            while (!isEmpty())
                pop();
        }
   
        void push(int binary);  
        int pop();
        bool isEmpty();
   
    private:
        Node* head;
};

#endif