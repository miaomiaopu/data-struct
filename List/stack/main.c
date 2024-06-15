#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main()
{
    NODEP stack = initStack();
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    printStack(stack);
    printf("%d\n", pop(stack));
    printf("%d\n", top(stack));
    printStack(stack);
    return 0;
}