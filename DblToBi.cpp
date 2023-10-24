// This is DoubleToBinary.cpp
// Amanda Graves
// CSDP 250-0101 Project 3
//

#include "NumberStack.h"
#include "NumberQueue.h"
#include <iostream>
using namespace std;

// global function declaration
void doubleToBinary(double value, int precision);


int main()
{
    // convert using test data
    doubleToBinary(14.625, 6);
    doubleToBinary(3.14159, 10);
   
    // now with user input
    double value;
    int precision;
   
    cout << "Enter a positive decimal number: ";
    cin >> value;
   
    if (value < 0)
        value = 0;
   
    cout << "Enter the binary decimal precision: ";
    cin >> precision;
   
    if (precision < 0)
        precision = 0;

    cout << endl;
   
    doubleToBinary(value, precision);

    return 0;
}


// global function definition
void doubleToBinary(double value, int precision)
{
    // Step 1. Split value into integer & fractional parts

    // split the value
    int inter = int(value);
    double fract = value - inter;
   
    // print split results
    cout << "Value:   \t" << value << endl;
    cout << "Integer: \t" << inter << endl;
    cout << "Decimal: \t" << fract << endl;
   
    cout << "\nBinary (precision " << precision << "):" << endl;


    // Step 2. Convert the integer part to binary using a stack
   
    // store results in a stack
    NumberStack myStack;
    while (inter > 0)
    {
        int remainder = inter % 2;
        myStack.push(remainder);
        inter /= 2;
    }

    // print integer results from stack
    while (!myStack.isEmpty())
    {
        cout << myStack.pop();
    }
   
       
    // Step 3. Convert the fractional part to binary using a queue
   
    // add a decimal point
    cout << ".";
   
    // store results in a queue
    NumberQueue myQue;
    int bitCount = 0;
   
    while (fract > 0.0 && precision > bitCount)
    {
        int bit = 0;
        fract *= 2.0;
        if (fract >= 1)
        {
            bit = 1;
            fract -= 1;
        }
   
        myQue.enqueue(bit);
        bitCount++;
    }

    // print decimal results from queue
    while (!myQue.isEmpty())
    {
        cout << myQue.dequeue();
    }
       

    // Step 4. Output results (already done).
    cout << "\n\nDone.\n\n" << endl;
    return;
}