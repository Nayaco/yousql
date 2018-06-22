#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/stack.h"


int main(int argc, char const *argv[])
{
    printf("dada\n");
    stackptr stack = CreateStack();
    int i = 0;
    for(i = 0; i < 100; i++){
        Push(stack, i + 10);
    }
    for(i = 0; i < 100; i++){
        printf("| %d %d\n", stack->cur, stack->size);
        printf("%d \n", Pop(stack));
    }
    printf("| %d %d\n", stack->cur, stack->size);
    FreeStack(stack);
    return 0;
}
