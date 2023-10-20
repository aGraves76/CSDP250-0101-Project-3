// This is Node.h
// Amanda Graves
// CSDP 250-0101 Project 3
//

#ifndef NODE_H
#define NODE_H

// Both queue and stack classes use a common Node struct.
struct Node
{
    int bit;
    Node* next;

    Node(int binary)
    {
        this->bit = binary;
        this->next = nullptr;
    }
};

#endif