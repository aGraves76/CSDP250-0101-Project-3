// This is DblToBi.cpp
// Amanda Graves
// CSDP 250-0101 Project 3
//

#include "NumberStack.h"
#include "NumberQueue.h"
#include <iostream>
using namespace std;

// global function declaration
void doubleToBinary(double input);


int main()
{
    doubleToBinary(14.625);
    doubleToBinary(3.14159);

    return 0;
}


// global function definition
void doubleToBinary(double input)
{
    // Step 1. Split input into integer & fractional parts

    // split the input
    int inter = int(input);
    double fract = input - inter;
   
    // print split results
    cout << "Input:   \t" << input << endl;
    cout << "Integer: \t" << inter << endl;
    cout << "Decimal: \t" << fract << endl;
   
    cout << "\nBinary:" << endl;


    // Step 2. Convert the integer part to binary using a stack
   
    // store results in myStack
    NumberStack myStack;
    while (inter > 0)
    {
        int remainder = inter % 2;
        myStack.push(remainder);
        inter /= 2;
    }

    // print integer results from myStack
    while (!myStack.isEmpty())
    {
        cout << myStack.pop();
    }
   
   
    // add a decimal piont
    cout << ".";
   
   
    // Step 3. Convert the fractional part to binary using a myQue
   
    // store results in a myQue
    NumberQueue myQue;
    while (fract > 0.0)
    {
        int binary = 0;
        fract *= 2.0;
        if (fract >= 1)
        {
            binary = 1;
            fract -= 1;
        }
   
        myQue.enqueue(binary);
    }

    // print decimal results from myQue
    while (!myQue.isEmpty())
    {
        cout << myQue.dequeue();
    }
       

    // Step 4. Output results (already done).
    cout << "\n\nDone.\n" << endl;
    return;
}
