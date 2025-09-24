/* ******************************************
 * File:   main.h
 * Author: Alex Katrompas
 * The interface for main() which is a simple
 * test script.
 * ******************************************/

#ifndef STACK_MAIN_H
#define STACK_MAIN_H

#define MULTIPLIER 1.5 // used to test overflow and underflow
#define NARROW .30 // percent of the stack for a narrow band
#define RANDOM_MULTIPLIER 10
#define CHOICES 6 // used to pick random operations
#define MAX_INT 10000000 // random ints to push, 1 - 10000000
#define MINSTACKSIZE 4 // minimum stack size for mid-stack tests

#include <iostream> // cout, endl
#include <stdio.h>  // rand
#include <time.h>   // time
#include <cmath>    // round
#include "stack.h"  // stack class
#include "stack.h"  // Stack

using std::cout;
using std::endl;

#endif //STACK_MAIN_H
