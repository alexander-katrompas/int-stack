/* ******************************************
 * File:   main.cpp
 * Author: Alex Katrompas
 * The implementation for main() which is
 * a simple test script.
 * ******************************************/

// INSTRUCTIONAL: include this module's header and NOTHING ELSE, no other directives
#include "main.h"

int main() {
    /* ****************************************
    Test script for testing the stack.

    @param na : na
    @return (int) : 0/1 execution failure/success
    @exception na : na
    @note peek() and pop() use different techniques in this example ONLY
          for demonstration purposes. normally peek() and pop() should have
          identical interfaces and calls
    @note normally this file should be broken up into unit tests
          acress multiple functions/files. it is shown here all
          at once for simplicity and demonstration purposes
    *********************************************/

    // seeds the rand() function
    // INSTRUCTIONAL: call only ONCE!
    srand(time(NULL));

    /*  INSTRUCTIONAL: make only one stack for testing!
        do not create multiple stacks unless you intend to test
        them all independently and completely */
    Stack stack;
    cout << "Stack created." << endl;

    int value; // generic int used for testing

    // counters for tests
    int is_empty = 0;
    int peeked = 0;
    int popped = 0;
    int pushed = 0;

    cout << "Beginning tests..." << endl;

   return 0;
}

