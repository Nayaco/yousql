#ifndef CONTAINER_H
#define CONTAINER_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "include/types.h"
#include "include/block.h"
#include "include/chain.h"

struct Container{
    // the chain to contain the data
    chainptr data;


    // the current size
    Int32    size;

    Gptr     buffer;
};
typedef struct Container *containptr;

containptr CreateContainer();

void FreeContainer();



#endif