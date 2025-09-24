/* ******************************************
 * File:   stack.h
 * Author: Alex Katrompas
 * The interface for a simple integer Stack class.
 * The purpose of this class is to provide a
 * simple stack data structure for integers.
 * ******************************************/

#ifndef STACK_H
#define STACK_H

#define STACKSIZE 10

class Stack {

public:
    /**********************
     * Constructors/Destructor
     **********************/
    Stack();
    ~Stack();

    /**********************
     * Getters/Accessors
     **********************/

    bool isEmpty();
    bool peek(int*);

    /**********************
     * Setters/Mutators
     **********************/

    int pop();
    bool push(int);

    /**********************
    * Printing
    **********************/

    // none

private:

    /**********************
    * Methods
    **********************/

    // none

    /**********************
    * Attributes
    **********************/

    int top; //INSTRUCTIONAL: do not initialize here, use the constructor
    int stack[STACKSIZE]; //INSTRUCTIONAL: do not use literals here, use a constant

};

#endif //STACK_INTSTACK_H

