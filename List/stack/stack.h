#ifndef STACK_H__
#define STACK_H__

#define TRUE 0
#define FALSE 1

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *NODEP;

NODEP initStack();

void push(NODEP stack, int data);

int isEmpty(NODEP stack);

int pop(NODEP stack);

int top(NODEP stack);

void printStack(NODEP stack);

#endif // STACK_H__