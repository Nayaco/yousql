#include "include/stack.h"

// create stack
stackptr CreateStack()
{
    stackptr stack = calloc(1, sizeof(struct Stack));
    stack->index = calloc(1, sizeof(Int32));
    stack->size = stack->cur = 0;
    return stack;
}

// free stack
void FreeStack(stackptr stack)
{
    free(stack->index);
    free(stack);
}

// expand
void _ExpandStack(stackptr stack)
{
    stack->size += StackMaxLen;
    stack->index = realloc(stack->index, stack->size * sizeof(Int32));
}

// push
void Push(stackptr stack, Int32 val)
{
    if(stack->cur >= stack->size)_ExpandStack(stack);
    (stack->index)[stack->cur + 1] = val;
    stack->cur++;
}

// pop
Int32 Pop(stackptr stack)
{
    
}


