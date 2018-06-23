#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>

#define nullptr             ((void*)0)
#define false               0
#define true                1

typedef void                *Gptr;

typedef long long           Int64;
typedef unsigned long long  Uint64;
typedef long                Int32;
typedef unsigned long       Uint32;
typedef uint8_t             boolean;
typedef char*               string;
typedef boolean (*cmp)(Gptr a, Gptr b);

#endif