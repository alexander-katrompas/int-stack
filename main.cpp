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

    /************************************************
    ******* UNDERFLOW TESTS *************************
    ************************************************/

    cout << "  underflow tests ==> ";

    for (int i = 0; i < STACKSIZE*MULTIPLIER; i++) {

        if (stack.isEmpty()) {
            // should always increment
            is_empty++;
        } else {
            is_empty--;
        }

        if(stack.peek(&value)){
            peeked++;
        } else {
            // should always decrement
            peeked--;
        }

        try{
            value = stack.pop();
            popped++;
        } catch(...){
            // should always decrement
            popped--;
        }

        if (stack.push(i)){
            // should always increment
            pushed++;
            if(stack.peek(&value)){
                // should always increment
                peeked++;
            } else {
                peeked--;
            }
            try{ // returns to empty
                // should always increment
                value = stack.pop();
                popped++;
            } catch(...){
                popped--;
            }
        } else{
            pushed--;
        }
    }

    // INSTRUCTIONAL: notice these numbers are logical
    // in underflow, we should expect these numbers
    if(popped == 0 &&
       peeked == 0 &&
       pushed == round(STACKSIZE*MULTIPLIER) &&
       is_empty == round(STACKSIZE*MULTIPLIER)) {
        cout << "pass" << endl;
       } else {
           cout << "failed" << endl;
       }

    /************************************************
    ******* OVERFLOW TESTS **************************
    ************************************************/

    cout << "  overflow tests ==> ";

    // reset counters for tests
    is_empty = 0;
    peeked = 0;
    popped = 0;
    pushed = 0;
    // fill stack
    for (int i = 0; i <= STACKSIZE; i++) { // go one too far
        value = rand()%2 ? -(i + 1) : i+1; // 50/50 negative or positive number
        stack.push(value);
    }

    for (int i = 0; i < STACKSIZE*MULTIPLIER; i++) {

        if (stack.isEmpty()) {
            is_empty++;
        } else {
            // should always decrement
            is_empty--;
        }

        if(stack.peek(&value)){
            // should always increment
            peeked++;
        } else {
            peeked--;
        }

        try{
            // should always increment
            // stack is now not full
            value = stack.pop();
            popped++;
        } catch(...){
            popped--;
        }

        if (stack.push(i)){
            // should always increment
            // stack is now full again
            pushed++;
        } else{
            pushed--;
        }

        if (stack.push(i)){
            pushed++;
        } else{
            // should always decrement
            pushed--;
        }
    }

    // INSTRUCTIONAL: notice these numbers are logical
    // in overflow, we should expect these numbers
    if(popped == round(STACKSIZE*MULTIPLIER) &&
       peeked == round(STACKSIZE*MULTIPLIER) &&
       pushed == 0 &&
       -is_empty == round(STACKSIZE*MULTIPLIER)) {
        cout << "pass" << endl;
       } else {
           cout << "failed" << endl;
       }







    return 0;
}

