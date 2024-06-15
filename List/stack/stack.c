#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

NODEP initStack()
{
    NODEP stack = (NODEP)malloc(sizeof(NODE));
    stack->data = 0;
    stack->next = NULL;
    return stack;
}

void push(NODEP stack, int data)
{
    NODEP node = (NODEP)malloc(sizeof(NODE));
    node->data = data;
    node->next = stack->next;
    stack->next = node;
    stack->data++;
}

int isEmpty(NODEP stack)
{
    if (stack->data == 0 || stack->next == NULL)
    {
        return TRUE;
    }
    return FALSE;
}

int pop(NODEP stack)
{
    if (isEmpty(stack) == FALSE)
    {
        NODEP pop = stack->next;
        int data = pop->data;
        stack->next = pop->next;
        stack->data--;
        free(pop);
        return data;
    }
    return FALSE;
}

int top(NODEP stack)
{
    if (isEmpty(stack) == FALSE)
    {
        return stack->next->data;
    }
    return FALSE;
}

void printStack(NODEP stack)
{
    NODEP current = stack->next;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}