/* ******************************************
 * File:   stack.cpp
 * Author: Alex Katrompas
 * The implementation for a simple integer Stack class.
 * The purpose of this class is to provide a
 * simple stack data structure for integers.
 * ******************************************/

// INSTRUCTIONAL: include this module's header and NOTHING ELSE, no other directives
#include "stack.h"

Stack::Stack() {
    /* ****************************************
    Constructor

    @param na : na
    @return na : na
    @exception na : na
    @note the 'this' designation is optional. use it where
    there is ambiguity or just to be complete and precise.
    here it is shown for demonstration purposes.
    *********************************************/
    this->top = -1;
}


Stack::~Stack() {
    /* ****************************************
    Constructor

    @param na : na
    @return na : na
    @exception na : na
    @note nothing to do here, no dynamic memory
    *********************************************/
    }

    bool Stack::isEmpty() {
        /* ****************************************
        isEmpty - is the stack empty?

        @param na : na
        @return (bool) : true if empty, false if not
        @exception na : na
        @note the 'this' designation is optional. use it where
        there is ambiguity or just to be complete and precise.
        *********************************************/
        return this->top < 0;
    }

    bool Stack::peek(int *peeki) {
        /* ****************************************
        Peek an item from the top of the stack
        if there is one

        @param (int*)) : a pointer to an integer to hold the peeked value
        @return (bool) : true if peeked, false if not
        @exception na : na
        @note this method does not throw an exception if the stack is empty.
        It will return false in that case. If there is an item to peek,
        it will be placed in the integer pointed to by the parameter.
        *********************************************/
        bool peeked = false;
        if (top > -1) {
            *peeki = stack[top];
            peeked = true;
        }
        return peeked;
    }

    int Stack::pop() {
        /* ****************************************
        Pop an item from the top of the stack,
        if there is one

        @param na : na
        @return (int) : the integer popped
        @exception (int) : throw -1 if stack is empty
        @note this method throws an exception if the stack is empty.
        and will return the top item otherwise.
        *********************************************/
        if (top < 0) {
            throw -1; // INSTRUCTIONAL: throw an int because we cannot return one
        }             // INSTRUCTIONAL: no 'else' is needed, throw causes an immediate halt
        return stack[top--];
    }

    bool Stack::push(int i) {
        /* ****************************************
        Push an item to the top of the stack,
        if there is room

        @param (int) i : any integer to push
        @return (bool) : true if pushed, false if not
        @exception na : na
        @note na
        *********************************************/
        bool pushed = false;
        if (top < STACKSIZE - 1) {
            stack[++top] = i;
            pushed = true;
        }
        return pushed;
    }
