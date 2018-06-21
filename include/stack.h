#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <string.h>
#include "include/types.h"

struct Stack{
    Int32 *index;
    Int32 size;
};
typedef struct Stack *stackptr;

stackptr Create
#endif