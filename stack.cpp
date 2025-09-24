/* ******************************************
 * File:   stack.cpp
 * Author: Alex Katrompas
 * The implementation for a simple integer Stack class.
 * The purpose of this class is to provide a
 * simple stack data structure for integers.
 * ******************************************/

// INSTRUCTIONAL: include this modules header and nothing else, no other directives
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

