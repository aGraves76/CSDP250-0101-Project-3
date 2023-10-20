// This is NumberQueue.cpp
// Amanda Graves
// CSDP 250-0101 Project 3
//

#include "NumberQueue.h"
#include "Node.h"
#include <iostream>
using namespace std;

void NumberQueue::enqueue(int binary)
{
    Node* newNode = new Node(binary);
    if (isEmpty())
    {
        front = newNode;
        back = newNode;
    } 
    else 
    {
        back->next = newNode;
        back = newNode;
    }
}

int NumberQueue::dequeue()
{
    if (isEmpty())
    {
        throw underflow_error("Queue underflow");
    }
    Node* temp = front;
    front = front->next;
    int data = temp->bit;
    delete temp;

    return data;
}

bool NumberQueue::isEmpty()
{
    return front == nullptr;
}
