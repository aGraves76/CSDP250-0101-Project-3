// This is NumberStack.cpp
// Amanda Graves
// CSDP 250-0101 Project 3
//

#include "NumberStack.h"
#include "Node.h"
#include <iostream>
using namespace std;

void NumberStack::push(int binary)
{
    Node* newNode = new Node(binary);
    newNode->next = head;
    head = newNode;
}

int NumberStack::pop()
{
    if (isEmpty())
    {
        throw underflow_error("Stack underflow");
    }
    Node* temp = head;
    head = head->next;
    int binary = temp->bit;
    delete temp;

    return binary;
}

bool NumberStack::isEmpty()
{
    return head == nullptr;
}
